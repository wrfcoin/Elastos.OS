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

#ifndef __ELASTOS_DROID_LOCATION_CGEOCODERHELPER_H__
#define __ELASTOS_DROID_LOCATION_CGEOCODERHELPER_H__

#include "_Elastos_Droid_Location_CGeocoderHelper.h"
#include <elastos/core/Singleton.h>

namespace Elastos {
namespace Droid {
namespace Location {

CarClass(CGeocoderHelper)
    , public Singleton
    , public IGeocoderHelper
{
public:
    CAR_INTERFACE_DECL()

    CAR_SINGLETON_DECL()

    /**
     * Returns true if the Geocoder methods getFromLocation and
     * getFromLocationName are implemented.  Lack of network
     * connectivity may still cause these methods to return null or
     * empty lists.
     */
    CARAPI IsPresent(
        /* [out] */ Boolean* isPresent);
};

}//namespace Location
}//namespace Droid
}//namespace Elastos

#endif // __ELASTOS_DROID_LOCATION_CGEOCODERHELPER_H__