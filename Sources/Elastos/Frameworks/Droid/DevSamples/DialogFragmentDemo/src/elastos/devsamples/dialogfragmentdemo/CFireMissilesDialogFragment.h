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

#ifndef __Elastos_DevSamples_DialogFragmentDemo_CFireMissilesDialogFragment_H__
#define __Elastos_DevSamples_DialogFragmentDemo_CFireMissilesDialogFragment_H__

#include <elastos/droid/app/DialogFragment.h>
#include "_Elastos_DevSamples_DialogFragmentDemo_CFireMissilesDialogFragment.h"

using Elastos::Droid::App::DialogFragment;

namespace Elastos {
namespace DevSamples {
namespace DialogFragmentDemo {

CarClass(CFireMissilesDialogFragment)
    , public DialogFragment
{
public:
    CAR_OBJECT_DECL()

    CARAPI constructor();

    CARAPI OnCreateDialog(
        /* [in] */ IBundle* savedInstanceState,
        /* [out] */ IDialog** dialog);
};

} // namespace DialogFragmentDemo
} // namespace DevSamples
} // namespace Elastos

#endif // __Elastos_DevSamples_DialogFragmentDemo_CFireMissilesDialogFragment_H__
