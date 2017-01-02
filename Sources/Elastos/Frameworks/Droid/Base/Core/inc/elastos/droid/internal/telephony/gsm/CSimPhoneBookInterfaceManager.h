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

#ifndef __ELASTOS_DROID_INTERNAL_TELEPHONY_GSM_CSIMPHONEBOOKINTERFACEMANAGER_H__
#define __ELASTOS_DROID_INTERNAL_TELEPHONY_GSM_CSIMPHONEBOOKINTERFACEMANAGER_H__

#include "_Elastos_Droid_Internal_Telephony_Gsm_CSimPhoneBookInterfaceManager.h"
#include "elastos/droid/ext/frameworkdef.h"
#include "elastos/droid/internal/telephony/IccPhoneBookInterfaceManager.h"
#include <elastos/core/Object.h>

using Elastos::Droid::Internal::Telephony::IccPhoneBookInterfaceManager;

namespace Elastos {
namespace Droid {
namespace Internal {
namespace Telephony {
namespace Gsm {

/**
 * SimPhoneBookInterfaceManager to provide an inter-process communication to
 * access ADN-like SIM records.
 */
CarClass(CSimPhoneBookInterfaceManager)
    , public IccPhoneBookInterfaceManager
    , public ISimPhoneBookInterfaceManager
{
public:
    // CSimPhoneBookInterfaceManager()
    // {}

    virtual ~CSimPhoneBookInterfaceManager();

    CAR_INTERFACE_DECL()

    CAR_OBJECT_DECL()

    CARAPI constructor();

    CARAPI constructor(
        /* [in] */ IGSMPhone* phone);

    CARAPI Dispose();

    CARAPI GetAdnRecordsSize(
        /* [in] */ Int32 efid,
        /* [out] */ ArrayOf<Int32>** result);

protected:
    CARAPI Logd(
        /* [in] */ const String& msg);

    CARAPI Loge(
        /* [in] */ const String& msg);

public:
    static const String TAG; // = "SimPhoneBookIM";
};

} // namespace Gem
} // namespace Telephony
} // namespace Internal
} // namespace Droid
} // namespace Elastos

#endif // __ELASTOS_DROID_INTERNAL_TELEPHONY_GSM_CSIMPHONEBOOKINTERFACEMANAGER_H__
