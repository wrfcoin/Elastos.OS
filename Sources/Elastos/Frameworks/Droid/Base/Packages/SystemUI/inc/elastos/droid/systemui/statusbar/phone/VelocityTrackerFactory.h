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

#ifndef  __ELASTOS_DROID_SYSTEMUI_STATUSBAR_PHONE_VELOCITYTRACKERFACTOR_H__
#define  __ELASTOS_DROID_SYSTEMUI_STATUSBAR_PHONE_VELOCITYTRACKERFACTOR_H__

#include "_Elastos.Droid.SystemUI.h"
#include <elastos/core/Object.h>

using Elastos::Droid::Content::IContext;
using Elastos::Core::Object;

namespace Elastos {
namespace Droid {
namespace SystemUI {
namespace StatusBar {
namespace Phone {

/**
 * A class to generate {@link VelocityTrackerInterface}, depending on the configuration.
 */
class VelocityTrackerFactory
{
public:
    static CARAPI_(AutoPtr<IVelocityTrackerInterface>) Obtain(
        /* [in] */ IContext* ctx);

public:
    static const String PLATFORM_IMPL;
    static const String NOISY_IMPL;
};

} // namespace Phone
} // namespace StatusBar
} // namespace SystemUI
} // namespace Droid
} // namespace Elastos

#endif // __ELASTOS_DROID_SYSTEMUI_STATUSBAR_PHONE_VELOCITYTRACKERFACTOR_H__
