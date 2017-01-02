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

#ifndef  __ELASTOS_DROID_SYSTEMUI_STATUSBAR_PHONE_CFASTCOLORDRAWABLE_H__
#define  __ELASTOS_DROID_SYSTEMUI_STATUSBAR_PHONE_CFASTCOLORDRAWABLE_H__

#include "_Elastos_Droid_SystemUI_StatusBar_Phone_CFastColorDrawable.h"
#include <elastos/droid/graphics/drawable/Drawable.h>

using Elastos::Droid::Graphics::ICanvas;
using Elastos::Droid::Graphics::IRect;
using Elastos::Droid::Graphics::Drawable::Drawable;

namespace Elastos {
namespace Droid {
namespace SystemUI {
namespace StatusBar {
namespace Phone {

CarClass(CFastColorDrawable), public Drawable
{
public:
    CAR_OBJECT_DECL()

    CFastColorDrawable();

    CARAPI constructor(
        /* [in] */ Int32 color);

    // @Override
    CARAPI Draw(
        /* [in] */ ICanvas* canvas);

    // @Override
    CARAPI SetAlpha(
        /* [in] */ Int32 alpha);

    // @Override
    CARAPI SetColorFilter(
        /* [in] */ IColorFilter* cf);

    // @Override
    CARAPI GetOpacity(
        /* [out] */ Int32* result);

    // @Override
    CARAPI SetBounds(
        /* [in] */ Int32 left,
        /* [in] */ Int32 top,
        /* [in] */ Int32 right,
        /* [in] */ Int32 bottom);

    // @Override
    CARAPI SetBounds(
        /* [in] */ IRect* bounds);

private:
    Int32 mColor;
};

} // namespace Phone
} // namespace StatusBar
} // namespace SystemUI
} // namespace Droid
} // namespace Elastos

#endif // __ELASTOS_DROID_SYSTEMUI_STATUSBAR_PHONE_CFASTCOLORDRAWABLE_H__
