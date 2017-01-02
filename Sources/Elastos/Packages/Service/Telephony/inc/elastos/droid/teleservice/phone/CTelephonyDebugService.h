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

#ifndef  __ELASTOS_DROID_PHONE_CTELEPHONYDEBUGSERVICE_H__
#define  __ELASTOS_DROID_PHONE_CTELEPHONYDEBUGSERVICE_H__

#include "_Elastos_Droid_TeleService_Phone_CTelephonyDebugService.h"
#include "elastos/droid/ext/frameworkext.h"
#include "elastos/droid/app/Service.h"
#include "Elastos.Droid.Content.h"
#include "Elastos.Droid.Internal.h"
#include "Elastos.Droid.Os.h"
#include "Elastos.CoreLibrary.IO.h"

using Elastos::Droid::App::Service;
using Elastos::Droid::Content::IIntent;
using Elastos::Droid::Os::IBinder;
using Elastos::Droid::Internal::Telephony::IDebugService;
using Elastos::IO::IFileDescriptor;
using Elastos::IO::IPrintWriter;

namespace Elastos {
namespace Droid {
namespace TeleService {
namespace Phone {

/**
 * A debug service for telephony.
 */
CarClass(CTelephonyDebugService)
    , public Elastos::Droid::App::Service
{
public:
    CAR_OBJECT_DECL();

    CTelephonyDebugService();

    CARAPI constructor();

    /**
     * {@inheritDoc}
     */
    //@Override
    CARAPI OnBind(
        /* [in] */ IIntent* intent,
        /* [out] */ IBinder** binder);

protected:
    //@Override
    CARAPI Dump(
        /* [in] */ IFileDescriptor* fd,
        /* [in] */ IPrintWriter* writer,
        /* [in] */ ArrayOf<String>* args);

private:
    static String TAG;
    AutoPtr<IDebugService> mDebugService;
};

} // namespace Phone
} // namespace TeleService
} // namespace Droid
} // namespace Elastos

#endif // __ELASTOS_DROID_PHONE_CTELEPHONYDEBUGSERVICE_H__