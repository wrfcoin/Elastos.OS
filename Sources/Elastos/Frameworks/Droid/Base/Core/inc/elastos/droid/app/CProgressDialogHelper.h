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

#ifndef __ELASTOS_DROID_APP_CPROGRESS_DIALOG_HELPER_H__
#define __ELASTOS_DROID_APP_CPROGRESS_DIALOG_HELPER_H__

#include "_Elastos_Droid_App_CProgressDialogHelper.h"
#include <elastos/core/Singleton.h>

using Elastos::Droid::Content::IContext;
using Elastos::Droid::Content::IDialogInterfaceOnCancelListener;
using Elastos::Core::ICharSequence;

namespace Elastos {
namespace Droid {
namespace App {

CarClass(CProgressDialogHelper)
    , public Singleton
    , public IProgressDialogHelper
{
public:
    CAR_INTERFACE_DECL()

    CAR_SINGLETON_DECL()

    CARAPI Show(
        /* [in] */ IContext* ctx,
        /* [in] */ ICharSequence* title,
        /* [in] */ ICharSequence* message,
        /* [out] */ IProgressDialog** pDialog);

    CARAPI Show(
        /* [in] */ IContext* ctx,
        /* [in] */ ICharSequence* title,
        /* [in] */ ICharSequence* message,
        /* [in] */ Boolean indeterminate,
        /* [out] */ IProgressDialog** pDialog);

    CARAPI Show(
        /* [in] */ IContext* ctx,
        /* [in] */ ICharSequence* title,
        /* [in] */ ICharSequence* message,
        /* [in] */ Boolean indeterminate,
        /* [in] */ Boolean cancelable,
        /* [out] */ IProgressDialog** pDialog);

    CARAPI Show(
        /* [in] */ IContext* ctx,
        /* [in] */ ICharSequence* title,
        /* [in] */ ICharSequence* message,
        /* [in] */ Boolean indeterminate,
        /* [in] */ Boolean cancelable,
        /* [in] */ IDialogInterfaceOnCancelListener* cancelListener,
        /* [out] */ IProgressDialog** pDialog);
};

} // namespace App
} // namespace Droid
} // namespace Elastos

#endif //__ELASTOS_DROID_APP_CPROGRESS_DIALOG_HELPER_H__
