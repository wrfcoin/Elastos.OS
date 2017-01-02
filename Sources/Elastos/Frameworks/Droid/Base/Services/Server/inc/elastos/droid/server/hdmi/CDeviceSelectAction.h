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

#ifndef __ELASTOS_DROID_SERVER_HDMI_CDEVICESELECTACTION_H__
#define __ELASTOS_DROID_SERVER_HDMI_CDEVICESELECTACTION_H__

#include "_Elastos_Droid_Server_Hdmi_CDeviceSelectAction.h"
#include "elastos/droid/server/hdmi/DeviceSelectAction.h"

namespace Elastos {
namespace Droid {
namespace Server {
namespace Hdmi {

/**
 * Handles an action that selects a logical device as a new active source.
 *
 * Triggered by {@link HdmiTvClient}, attempts to select the given target device
 * for a new active source. It does its best to wake up the target in standby mode
 * before issuing the command &gt;Set Stream path&lt;.
 */
CarClass(CDeviceSelectAction)
    , public DeviceSelectAction
{
public:
    CAR_OBJECT_DECL()
};

} // namespace Hdmi
} // namespace Server
} // namespace Droid
} // namespace Elastos

#endif // __ELASTOS_DROID_SERVER_HDMI_CDEVICESELECTACTION_H__
