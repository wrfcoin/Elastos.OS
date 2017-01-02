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

#ifndef __ELASTOS_DROID_VIEW_INPUTMETHOD_CCONTROLLEDINPUTCONNECTIONWRAPPER_H__
#define __ELASTOS_DROID_VIEW_INPUTMETHOD_CCONTROLLEDINPUTCONNECTIONWRAPPER_H__

#include "_Elastos_Droid_View_InputMethod_CControlledInputConnectionWrapper.h"
#include "elastos/droid/internal/view/IInputConnectionWrapper.h"
#include "elastos/droid/view/inputmethod/CInputMethodManager.h"
#include <elastos/core/Object.h>

using Elastos::Droid::Os::IBinder;
using Elastos::Droid::Os::IBundle;
using Elastos::Droid::Os::ILooper;
using Elastos::Droid::Internal::View::IIInputContext;
using Elastos::Droid::Internal::View::IIInputContextCallback;
using Elastos::Droid::Internal::View::IInputConnectionWrapper;

using Elastos::Core::ICharSequence;

namespace Elastos {
namespace Droid {
namespace View {
namespace InputMethod {

CarClass(CControlledInputConnectionWrapper)
    , public IInputConnectionWrapper
{
public:
    CAR_OBJECT_DECL()

    CControlledInputConnectionWrapper();

    CARAPI constructor(
        /* [in] */ ILooper* mainLooper,
        /* [in] */ IInputConnection* conn,
        /* [in] */ IInputMethodManager* agmer);

    CARAPI IsActive(
        /* [out] */ Boolean* result);

    CARAPI Deactivate();

private:
    AutoPtr<CInputMethodManager> mParentInputMethodManager;
    Boolean mActive;
};

} // namespace InputMethod
} // namespace View
} // namespace Droid
} // namespace Elastos

#endif   //__ELASTOS_DROID_VIEW_INPUTMETHOD_CCONTROLLEDINPUTCONNECTIONWRAPPER_H__
