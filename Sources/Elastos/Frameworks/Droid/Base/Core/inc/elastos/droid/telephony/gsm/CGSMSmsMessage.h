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

#ifndef __ELASTOS_DROID_TELEPHONY_GSM_CGSMSMSMESSAGE_H__
#define __ELASTOS_DROID_TELEPHONY_GSM_CGSMSMSMESSAGE_H__

#include "Elastos.Droid.Internal.h"
#include "_Elastos_Droid_Telephony_Gsm_CGSMSmsMessage.h"
#include "elastos/droid/telephony/gsm/GSMSmsMessage.h"

namespace Elastos {
namespace Droid {
namespace Telephony {
namespace Gsm {

CarClass(CGSMSmsMessage)
    , public GSMSmsMessage
{
public:
    CAR_OBJECT_DECL()
};

} // namespace Gsm
} // namespace Telephony
} // namespace Droid
} // namespace Elastos

#endif // __ELASTOS_DROID_TELEPHONY_GSM_CGSMSMSMESSAGE_H__
