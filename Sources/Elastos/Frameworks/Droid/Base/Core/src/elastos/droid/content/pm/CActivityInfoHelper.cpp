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

#include "elastos/droid/ext/frameworkext.h"
#include "elastos/droid/content/pm/CActivityInfoHelper.h"
#include "elastos/droid/content/pm/ActivityInfo.h"

namespace Elastos {
namespace Droid {
namespace Content {
namespace Pm {

CAR_INTERFACE_IMPL(CActivityInfoHelper, Singleton, IActivityInfoHelper)

CAR_SINGLETON_IMPL(CActivityInfoHelper)

ECode CActivityInfoHelper::GetCONFIG_NATIVE_BITS(
    /* [out, callee] */ ArrayOf<Int32>** bits)
{
    VALIDATE_NOT_NULL(bits);
    *bits = ActivityInfo::CONFIG_NATIVE_BITS;
    REFCOUNT_ADD(*bits);
    return NOERROR;
}

ECode CActivityInfoHelper::ActivityInfoConfigToNative(
    /* [in] */ Int32 input,
    /* [out] */ Int32* native)
{
    VALIDATE_NOT_NULL(native);
    *native = ActivityInfo::ActivityInfoConfigToNative(input);
    return NOERROR;
}

} // namespace Pm
} // namespace Content
} // namespace Droid
} // namespace Elastos

