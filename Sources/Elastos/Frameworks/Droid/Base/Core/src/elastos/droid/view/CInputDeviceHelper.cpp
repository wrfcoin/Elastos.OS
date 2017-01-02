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

#include "elastos/droid/view/CInputDeviceHelper.h"
#include "elastos/droid/view/CInputDevice.h"

namespace Elastos {
namespace Droid {
namespace View {

CAR_INTERFACE_IMPL(CInputDeviceHelper, Singleton, IInputDeviceHelper)

CAR_SINGLETON_IMPL(CInputDeviceHelper)

ECode CInputDeviceHelper::GetDevice(
    /* [in] */ Int32 id,
    /* [out] */ IInputDevice** device)
{
    return CInputDevice::GetDevice(id, device);
}

ECode CInputDeviceHelper::GetDeviceIds(
    /* [out, callee] */ ArrayOf<Int32>** deviceIds)
{
    return CInputDevice::GetDeviceIds(deviceIds);
}

} // namespace View
} // namespace Droid
} // namespace Elastos