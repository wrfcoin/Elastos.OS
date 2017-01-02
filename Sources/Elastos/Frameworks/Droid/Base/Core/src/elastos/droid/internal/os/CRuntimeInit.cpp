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

#include "elastos/droid/internal/os/CRuntimeInit.h"
#include "elastos/droid/internal/os/RuntimeInit.h"

namespace Elastos {
namespace Droid {
namespace Internal {
namespace Os {

CAR_INTERFACE_IMPL(CRuntimeInit, Singleton, IRuntimeInit)

CAR_SINGLETON_IMPL(CRuntimeInit)

ECode CRuntimeInit::Main(
    /* [in] */ const ArrayOf<String>& args)
{
    return RuntimeInit::Main(args);
}

ECode CRuntimeInit::SetApplicationObject(
    /* [in] */ IBinder* app)
{
    return RuntimeInit::SetApplicationObject(app);
}

ECode CRuntimeInit::GetApplicationObject(
    /* [out] */ IBinder** app)
{
    return RuntimeInit::GetApplicationObject(app);
}

} // namespace Os
} // namespace Droid
} // namespace Internal
} // namespace Elastos
