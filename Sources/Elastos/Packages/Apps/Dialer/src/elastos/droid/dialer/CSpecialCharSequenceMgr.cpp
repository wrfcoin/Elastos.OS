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

#include "elastos/droid/dialer/CSpecialCharSequenceMgr.h"
#include "elastos/droid/dialer/SpecialCharSequenceMgr.h"

namespace Elastos {
namespace Droid {
namespace Dialer {

CAR_INTERFACE_IMPL(CSpecialCharSequenceMgr, Singleton, ISpecialCharSequenceMgr);

CAR_SINGLETON_IMPL(CSpecialCharSequenceMgr);

ECode CSpecialCharSequenceMgr::HandleChars(
    /* [in] */ IContext* context,
    /* [in] */ String input,
    /* [in] */ IEditText* textField,
    /* [out] */ Boolean* result)
{
    VALIDATE_NOT_NULL(result);
    *result = SpecialCharSequenceMgr::HandleChars(context, input, textField);
    return NOERROR;
}

ECode CSpecialCharSequenceMgr::Cleanup()
{
    SpecialCharSequenceMgr::Cleanup();
    return NOERROR;
}

} // Dialer
} // Droid
} // Elastos
