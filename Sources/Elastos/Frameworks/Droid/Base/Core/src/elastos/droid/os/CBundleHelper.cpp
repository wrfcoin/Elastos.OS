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

#include "Elastos.Droid.Content.h"
#include "elastos/droid/os/CBundleHelper.h"
#include "elastos/droid/os/CBundle.h"

namespace Elastos {
namespace Droid {
namespace Os {

CAR_INTERFACE_IMPL(CBundleHelper, Singleton, IBundleHelper)

CAR_SINGLETON_IMPL(CBundleHelper)

ECode CBundleHelper::GetEMPTY(
    /* [out] */ IBundle** bundle)
{
    VALIDATE_NOT_NULL(bundle)
    *bundle = CBundle::EMPTY;
    REFCOUNT_ADD(*bundle);
    return NOERROR;
}

ECode CBundleHelper::ForPair(
    /* [in] */ const String& key,
    /* [in] */ const String& value,
    /* [out] */ IBundle** bundle)
{
    VALIDATE_NOT_NULL(bundle)
    AutoPtr<IBundle> b = CBundle::ForPair(key, value);
    *bundle = b;
    REFCOUNT_ADD(*bundle)
    return NOERROR;
}

} // namespace Os
} // namespace Droid
} // namespace Elastos
