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
#include "elastos/droid/text/CAutoTextHelper.h"
#include "elastos/droid/text/CAutoText.h"

namespace Elastos {
namespace Droid {
namespace Text {

CAR_INTERFACE_IMPL(CAutoTextHelper, Singleton, IAutoTextHelper)

CAR_SINGLETON_IMPL(CAutoTextHelper)

ECode CAutoTextHelper::Get(
    /* [in] */ ICharSequence* src,
    /* [in] */ Int32 start,
    /* [in] */ Int32 end,
    /* [in] */ IView* view,
    /* [out] */ String* ret)
{
    VALIDATE_NOT_NULL(ret);
    *ret = CAutoText::Get(src, start, end, view);
    return NOERROR;
}

ECode CAutoTextHelper::GetSize(
    /* [in] */ IView* view,
    /* [out] */ Int32* ret)
{
    VALIDATE_NOT_NULL(ret);
    *ret = CAutoText::GetSize(view);
    return NOERROR;
}

} // namespace Text
} // namepsace Droid
} // namespace Elastos