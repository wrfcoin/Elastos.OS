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

#include "elastos/droid/media/CAudioPatch.h"

namespace Elastos {
namespace Droid {
namespace Media {

CAR_INTERFACE_IMPL(CAudioPatch, Object, IAudioPatch)

CAR_OBJECT_IMPL(CAudioPatch)

CAudioPatch::CAudioPatch()
{
}

CAudioPatch::~CAudioPatch()
{
}

ECode CAudioPatch::constructor(
    /* [in] */ IAudioHandle* patchHandle,
    /* [in] */ ArrayOf<IAudioPortConfig*>* sources,
    /* [in] */ ArrayOf<IAudioPortConfig*>* sinks)
{
    mHandle = patchHandle;
    mSources = sources;
    mSinks = sinks;
    return NOERROR;
}

ECode CAudioPatch::Sources(
    /* [out, callee] */ ArrayOf<IAudioPortConfig*>** result)
{
    VALIDATE_NOT_NULL(result)
    *result = mSources;
    REFCOUNT_ADD(*result)
    return NOERROR;
}

ECode CAudioPatch::Sinks(
    /* [out, callee] */ ArrayOf<IAudioPortConfig*>** result)
{
    VALIDATE_NOT_NULL(result)
    *result = mSinks;
    REFCOUNT_ADD(*result)
    return NOERROR;
}

} // namespace Media
} // namepsace Droid
} // namespace Elastos
