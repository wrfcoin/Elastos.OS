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

#include "elastos/droid/hardware/camera2/legacy/CCameraDeviceUserShimHelper.h"
#include "elastos/droid/hardware/camera2/legacy/CameraDeviceUserShim.h"

namespace Elastos {
namespace Droid {
namespace Hardware {
namespace Camera2 {
namespace Legacy {

CAR_INTERFACE_IMPL(CCameraDeviceUserShimHelper, Singleton, ICameraDeviceUserShimHelper)

CAR_SINGLETON_IMPL(CCameraDeviceUserShimHelper)

ECode CCameraDeviceUserShimHelper::ConnectBinderShim(
    /* [in] */ IICameraDeviceCallbacks* callbacks,
    /* [in] */ Int32 cameraId,
    /* [out] */ ICameraDeviceUserShim** shim)
{
    VALIDATE_NOT_NULL(shim);

    return CameraDeviceUserShim::ConnectBinderShim(callbacks, cameraId, shim);
}

} // namespace Legacy
} // namespace Camera2
} // namespace Hardware
} // namespace Droid
} // namespace Elastos
