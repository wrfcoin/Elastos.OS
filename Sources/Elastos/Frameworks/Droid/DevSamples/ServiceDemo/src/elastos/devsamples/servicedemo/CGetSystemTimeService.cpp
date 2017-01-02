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

#include "CGetSystemTimeService.h"
#include <Elastos.Droid.Text.h>

using Elastos::Droid::Os::EIID_IBinder;
using Elastos::Droid::Text::Format::ITime;
using Elastos::Droid::Text::Format::CTime;

namespace Elastos {
namespace DevSamples {
namespace ServiceDemo {

CAR_INTERFACE_IMPL_2(CGetSystemTimeService, Object, IGetSystemTimeService, IBinder)

CAR_OBJECT_IMPL(CGetSystemTimeService)

ECode CGetSystemTimeService::constructor()
{
    return NOERROR;
}

ECode CGetSystemTimeService::GetSystemTime(
    /* [out] */ String* timeStr)
{
    VALIDATE_NOT_NULL(timeStr)
    AutoPtr<ITime> t;
    CTime::New((ITime**)&t);
    t->SetToNow();
    *timeStr = Object::ToString(t);
    return NOERROR;
}

} // namespace ServiceDemo
} // namespace DevSamples
} // namespace Elastos