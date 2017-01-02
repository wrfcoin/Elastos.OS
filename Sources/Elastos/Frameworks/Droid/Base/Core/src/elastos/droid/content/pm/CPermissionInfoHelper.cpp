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
#include "elastos/droid/content/pm/CPermissionInfoHelper.h"
#include "elastos/droid/content/pm/CPermissionInfo.h"

namespace Elastos {
namespace Droid {
namespace Content {
namespace Pm {

CAR_INTERFACE_IMPL(CPermissionInfoHelper, Singleton, IPermissionInfoHelper)

CAR_SINGLETON_IMPL(CPermissionInfoHelper)

ECode CPermissionInfoHelper::FixProtectionLevel(
    /* [in] */ Int32 level,
    /* [out] */ Int32* retLevel)
{
    VALIDATE_NOT_NULL(retLevel);
    *retLevel = CPermissionInfo::FixProtectionLevel(level);
    return NOERROR;
}

ECode CPermissionInfoHelper::ProtectionToString(
    /* [in] */ Int32 level,
    /* [out] */ String* protLevel)
{
    VALIDATE_NOT_NULL(protLevel);
    *protLevel = CPermissionInfo::ProtectionToString(level);
    return NOERROR;
}

} // namespace Pm
} // namespace Content
} // namespace Droid
} // namespace Elastos
