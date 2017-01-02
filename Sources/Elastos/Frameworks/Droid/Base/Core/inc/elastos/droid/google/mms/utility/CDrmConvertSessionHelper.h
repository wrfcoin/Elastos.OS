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

#ifndef __ELASTOS_DROID_GOOGLE_MMS_UTILITY_CDRMCONVERTSESSIONHELPER_H__
#define __ELASTOS_DROID_GOOGLE_MMS_UTILITY_CDRMCONVERTSESSIONHELPER_H__

#include "_Elastos_Droid_Google_Mms_Utility_CDrmConvertSessionHelper.h"
#include "elastos/core/Singleton.h"

using Elastos::Droid::Content::IContext;

namespace Elastos {
namespace Droid {
namespace Google {
namespace Mms {
namespace Utility {

CarClass(CDrmConvertSessionHelper)
    , public Singleton
    , public IDrmConvertSessionHelper
{
public:
    CAR_INTERFACE_DECL()
    CAR_SINGLETON_DECL()

    CARAPI Open(
        /* [in] */ IContext* context,
        /* [in] */ const String& mimeType,
        /* [out] */ IDrmConvertSession** result);

};

} // namespace Utility
} // namespace Mms
} // namespace Google
} // namespace Droid
} // namespace Elastos

#endif // __ELASTOS_DROID_GOOGLE_MMS_UTILITY_CDRMCONVERTSESSIONHELPER_H__
