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

#ifndef __ELASTOS_DROID_BLUETOOTH_CBLUETOOTHDUNSTATECHANGECALLBACK_H__
#define __ELASTOS_DROID_BLUETOOTH_CBLUETOOTHDUNSTATECHANGECALLBACK_H__

#include "_Elastos_Droid_Bluetooth_CBluetoothDunStateChangeCallback.h"
#include "elastos/droid/bluetooth/BluetoothDun.h"

namespace Elastos {
namespace Droid {
namespace Bluetooth {

CarClass(CBluetoothDunStateChangeCallback)
    , public Object
    , public IIBluetoothStateChangeCallback
    , public IBinder
{
public:
    CAR_INTERFACE_DECL()

    CAR_OBJECT_DECL()

    CBluetoothDunStateChangeCallback();

    CARAPI OnBluetoothStateChange(
        /* [in] */ Boolean on);

    CARAPI constructor(
        /* [in] */ IBluetoothDun* host);

    CARAPI ToString(
        /* [out] */ String* str);

private:
    BluetoothDun* mHost;
};
} // namespace Bluetooth
} // namespace Droid
} // namespace Elastos

#endif