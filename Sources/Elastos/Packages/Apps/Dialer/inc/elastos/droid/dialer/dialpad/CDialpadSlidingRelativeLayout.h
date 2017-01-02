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

#ifndef __ELASTOS_DROID_DIALER_DIALPAD_CDIALPADSLIDINGRELATIVELAYOUT_H__
#define __ELASTOS_DROID_DIALER_DIALPAD_CDIALPADSLIDINGRELATIVELAYOUT_H__

#include "elastos/droid/dialer/dialpad/DialpadFragment.h"
#include "_Elastos_Droid_Dialer_Dialpad_CDialpadSlidingRelativeLayout.h"

namespace Elastos {
namespace Droid {
namespace Dialer {
namespace Dialpad {

CarClass(CDialpadSlidingRelativeLayout)
    , public DialpadFragment::DialpadSlidingRelativeLayout
{
public:
    CAR_OBJECT_DECL();
};

} // Dialpad
} // Dialer
} // Droid
} // Elastos

#endif //__ELASTOS_DROID_DIALER_DIALPAD_CDIALPADSLIDINGRELATIVELAYOUT_H__