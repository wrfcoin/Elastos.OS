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

#include "elastos/droid/view/CAbsSavedStateHelper.h"
#include "elastos/droid/view/AbsSavedState.h"

namespace Elastos {
namespace Droid {
namespace View {

CAR_SINGLETON_IMPL(CAbsSavedStateHelper)

CAR_INTERFACE_IMPL(CAbsSavedStateHelper, Singleton, IAbsSavedStateHelper)

ECode CAbsSavedStateHelper::GetEMPTY_STATE(
    /* [out] */ IAbsSavedState** emptyState)
{
    VALIDATE_NOT_NULL(emptyState)
    AutoPtr<IAbsSavedState> empty = AbsSavedState::GetEMPTY_STATE();
    *emptyState = empty;
    REFCOUNT_ADD(*emptyState)
    return NOERROR;
}

} // namespace View
} // namespace Droid
} // namespace Elastos
