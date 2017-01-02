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

#ifndef __ELASTOS_DROID_TEXT_CAUTOTEXTHELPER_H__
#define __ELASTOS_DROID_TEXT_CAUTOTEXTHELPER_H__

#include "_Elastos_Droid_Text_CAutoTextHelper.h"
#include <elastos/core/Singleton.h>

using Elastos::Core::ICharSequence;
using Elastos::Droid::View::IView;

namespace Elastos {
namespace Droid {
namespace Text {

CarClass(CAutoTextHelper)
    , public Singleton
    , public IAutoTextHelper
{
public:
    CAR_INTERFACE_DECL()

    CAR_SINGLETON_DECL()

    CARAPI Get(
        /* [in] */ ICharSequence* src,
        /* [in] */ Int32 start,
        /* [in] */ Int32 end,
        /* [in] */ IView* view,
        /* [out] */ String* ret);

    CARAPI GetSize(
        /* [in] */ IView* view,
        /* [out] */ Int32* ret);

};

} // namespace Text
} // namepsace Droid
} // namespace Elastos

#endif // __ELASTOS_DROID_TEXT_CAUTOTEXTHELPER_H__
