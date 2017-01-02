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

#ifndef __ELASTOS_DROID_NET_WIFI_CWPSRESULT_H__
#define __ELASTOS_DROID_NET_WIFI_CWPSRESULT_H__

#include "_Elastos_Droid_Wifi_CWpsResult.h"
#include <elastos/core/Object.h>

namespace Elastos {
namespace Droid {
namespace Wifi {

CarClass(CWpsResult)
    , public Object
    , public IWpsResult
{
    friend class WifiConfigStore;
public:
    CAR_INTERFACE_DECL()

    CAR_OBJECT_DECL()

    CARAPI constructor();

    CARAPI constructor(
        /* [in] */ WpsResultStatus status);

    CARAPI constructor(
        /* [in] */ IWpsResult* source);

    CARAPI GetStatus(
        /* [out] */ WpsResultStatus* status);

    CARAPI SetStatus(
        /* [in] */ WpsResultStatus status);

    CARAPI GetPin(
        /* [out] */ String* pin);

    CARAPI SetPin(
        /* [in] */ const String& pin);

    CARAPI ToString(
        /* [out] */ String* value);

    CARAPI ReadFromParcel(
        /* [in] */ IParcel* source);

    CARAPI WriteToParcel(
        /* [in] */ IParcel* dest);

private:
    WpsResultStatus mStatus;
    String mPin;
};

} // namespace Wifi
} // namespace Droid
} // namespace Elastos

#endif // __ELASTOS_DROID_NET_WIFI_CWPSRESULT_H__
