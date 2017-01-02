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

#ifndef __ELASTOS_DROID_INTERNAL_TELEPHONY_CDMA_SMS_CBEARERDATAHELPER_H__
#define __ELASTOS_DROID_INTERNAL_TELEPHONY_CDMA_SMS_CBEARERDATAHELPER_H__

#include "_Elastos_Droid_Internal_Telephony_Cdma_Sms_CBearerDataHelper.h"
#include "elastos/core/Singleton.h"

namespace Elastos {
namespace Droid {
namespace Internal {
namespace Telephony {
namespace Cdma {
namespace Sms {

CarClass(CBearerDataHelper)
    , public Singleton
    , public IBearerDataHelper
{
public:
    CAR_INTERFACE_DECL()
    CAR_SINGLETON_DECL()

    CARAPI CalcTextEncodingDetails(
        /* [in] */ ICharSequence* msg,
        /* [in] */ Boolean force7BitEncoding,
        /* [out] */ IGsmAlphabetTextEncodingDetails** result);

    CARAPI Encode(
        /* [in] */ IBearerData* bData,
        /* [out, callee] */ ArrayOf<Byte>** result);

    CARAPI Decode(
        /* [in] */ ArrayOf<Byte>* smsData,
        /* [out] */ IBearerData** result);

    CARAPI Decode(
        /* [in] */ ArrayOf<Byte>* smsData,
        /* [in] */ Int32 serviceCategory,
        /* [out] */ IBearerData** result);
};

} // namespace Sms
} // namespace Cdma
} // namespace Telephony
} // namespace Internal
} // namespace Droid
} // namespace Elastos

#endif // __ELASTOS_DROID_INTERNAL_TELEPHONY_CDMA_SMS_CBEARERDATAHELPER_H__
