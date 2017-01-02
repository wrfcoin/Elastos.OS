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

#ifndef __ELASTOS_DROID_HARDWARE_CAMERA2_PARAMS_CSTREAMCONFIGURATIONMAP_H__
#define __ELASTOS_DROID_HARDWARE_CAMERA2_PARAMS_CSTREAMCONFIGURATIONMAP_H__

#include "_Elastos_Droid_Hardware_Camera2_Params_CStreamConfigurationMap.h"
#include "elastos/droid/hardware/camera2/params/StreamConfigurationMap.h"

namespace Elastos {
namespace Droid {
namespace Hardware {
namespace Camera2 {
namespace Params {

CarClass(CStreamConfigurationMap) , public StreamConfigurationMap
{
public:
    CAR_OBJECT_DECL()
};

} // namespace Params
} // namespace Camera2
} // namespace Hardware
} // namespace Droid
} // namespace Elastos

#endif  //__ELASTOS_DROID_HARDWARE_CAMERA2_PARAMS_CSTREAMCONFIGURATIONMAP_H__
