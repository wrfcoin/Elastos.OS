//=========================================================================
// Copyright (C) 2012 The Elastos Open Source Project
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//=========================================================================

#include "elastos/droid/systemui/usb/UsbAccessoryUriActivity.h"
#include "Elastos.Droid.App.h"
#include "Elastos.CoreLibrary.Core.h"
#include "elastos/droid/R.h"
#include "R.h"
#include <elastos/utility/logging/Logger.h>

using Elastos::Droid::App::IAlertDialog;
using Elastos::Droid::Content::CIntent;
using Elastos::Droid::Content::EIID_IDialogInterfaceOnClickListener;
using Elastos::Droid::Content::IIntent;
using Elastos::Droid::Hardware::Usb::IUsbManager;
using Elastos::Droid::Internal::App::IAlertControllerAlertParams;
using Elastos::Droid::Net::CUriHelper;
using Elastos::Droid::Net::IUriHelper;
using Elastos::Droid::Os::CUserHandleHelper;
using Elastos::Droid::Os::IUserHandle;
using Elastos::Droid::Os::IUserHandleHelper;
using Elastos::Droid::R;
using Elastos::Core::CString;
using Elastos::Core::ICharSequence;
using Elastos::Utility::Logging::Logger;

namespace Elastos {
namespace Droid {
namespace SystemUI {
namespace Usb {

CAR_INTERFACE_IMPL(UsbAccessoryUriActivity::InnerListener, Object, IDialogInterfaceOnClickListener)

UsbAccessoryUriActivity::InnerListener::InnerListener(
    /* [in] */ UsbAccessoryUriActivity* host)
    : mHost(host)
{}

ECode UsbAccessoryUriActivity::InnerListener::OnClick(
    /* [in] */ IDialogInterface* dialog,
    /* [in] */ Int32 which)
{
    return mHost->OnClick(dialog, which);
}

//-------------------------------------------------------------------------------------
// UsbAccessoryUriActivity
//-------------------------------------------------------------------------------------

const String UsbAccessoryUriActivity::TAG("UsbAccessoryUriActivity");


ECode UsbAccessoryUriActivity::constructor()
{
    return NOERROR;
}

ECode UsbAccessoryUriActivity::OnCreate(
    /* [in] */ IBundle* icicle)
{
    AlertActivity::OnCreate(icicle);

    AutoPtr<IIntent> intent;
    GetIntent((IIntent**)&intent);
    AutoPtr<IParcelable> parcelable;
    intent->GetParcelableExtra(IUsbManager::EXTRA_ACCESSORY, (IParcelable**)&parcelable);
    mAccessory = IUsbAccessory::Probe(parcelable);
    String uriString;
    intent->GetStringExtra(String("uri"), &uriString);
    AutoPtr<IUriHelper> uh;
    CUriHelper::AcquireSingleton((IUriHelper**)&uh);
    AutoPtr<IUri> u;
    uh->Parse(uriString, (IUri**)&u);
    mUri = uriString.IsNull() ? NULL : u;

    // sanity check before displaying dialog
    if (mUri == NULL) {
        Logger::E(TAG, "could not parse Uri %s", uriString.string());
        Finish();
        return E_NULL_POINTER_EXCEPTION;
    }
    String scheme;
    mUri->GetScheme(&scheme);
    if (!scheme.Equals("http") && !scheme.Equals("https")) {
        Logger::E(TAG, "Uri not http or https: %s", TO_CSTR(mUri));
        Finish();
        return E_NULL_POINTER_EXCEPTION;
    }

    const AutoPtr<IAlertControllerAlertParams> ap = mAlertParams;
    String desc;
    mAccessory->GetDescription(&desc);
    AutoPtr<ICharSequence> title;
    CString::New(desc, (ICharSequence**)&title);
    ap->SetTitle(title);
    Int32 n;
    title->GetLength(&n);
    if (title == NULL || n == 0) {
        String str;
        GetString(R::string::title_usb_accessory, &str);
        AutoPtr<ICharSequence> title2;
        CString::New(str, (ICharSequence**)&title2);
        ap->SetTitle(title2);
    }
    AutoPtr<ArrayOf<IInterface*> > aa = ArrayOf<IInterface*>::Alloc(1);
    aa->Set(0, mUri.Get());
    String str2;
    GetString(R::string::usb_accessory_uri_prompt, aa, &str2);
    AutoPtr<ICharSequence> message;
    CString::New(str2, (ICharSequence**)&message);
    ap->SetMessage(message);

    String str3;
    GetString(R::string::label_view, aa, &str3);
    AutoPtr<ICharSequence> text;
    CString::New(str3, (ICharSequence**)&text);
    ap->SetPositiveButtonText(text);

    String str4;
    GetString(Elastos::Droid::R::string::cancel, aa, &str4);
    AutoPtr<ICharSequence> text2;
    CString::New(str4, (ICharSequence**)&text2);
    AutoPtr<InnerListener> listener = new InnerListener(this);
    ap->SetNegativeButtonText(text2);
    ap->SetPositiveButtonListener(listener);
    ap->SetNegativeButtonListener(listener);

    AlertActivity::SetupAlert();
    return NOERROR;
}

ECode UsbAccessoryUriActivity::OnClick(
    /* [in] */ IDialogInterface* dialog,
    /* [in] */ Int32 which)
{
    if (which == IDialogInterface::BUTTON_POSITIVE) {
        // launch the browser
        AutoPtr<IIntent> intent;
        CIntent::New(IIntent::ACTION_VIEW, mUri, (IIntent**)&intent);
        intent->AddCategory(IIntent::CATEGORY_BROWSABLE);
        intent->AddFlags(IIntent::FLAG_ACTIVITY_NEW_TASK);

        AutoPtr<IUserHandleHelper> uhh;
        CUserHandleHelper::AcquireSingleton((IUserHandleHelper**)&uhh);
        AutoPtr<IUserHandle> uh;
        uhh->GetCURRENT((IUserHandle**)&uh);
        ECode ec = StartActivityAsUser(intent, uh);
        if (FAILED(ec)) {
            Logger::E(TAG, "startActivity failed for %s", TO_CSTR(mUri));
            return E_ACTIVITY_NOT_FOUND_EXCEPTION;
        }
    }
    Finish();
    return NOERROR;
}

} // namespace Usb
} // namespace SystemUI
} // namespace Droid
} // namespace Elastos