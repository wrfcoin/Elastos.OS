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

#ifndef __ELASTOS_DROID_CONTENT_RES_CTHEMECONFIGHELPER_H__
#define __ELASTOS_DROID_CONTENT_RES_CTHEMECONFIGHELPER_H__

#include "_Elastos_Droid_Content_Res_CThemeConfigHelper.h"
#include <elastos/core/Singleton.h>

namespace Elastos {
namespace Droid {
namespace Content {
namespace Res {

CarClass(CThemeConfigHelper)
    , public Singleton
    , public IThemeConfigHelper
{
public:
    CAR_INTERFACE_DECL()

    CAR_SINGLETON_DECL()

    CARAPI FromJson(
        /* [in] */ const String& json,
        /* [out] */ IThemeConfig** themeConfig);

    /**
     * Represents the theme that the device booted into. This is used to
     * simulate a "default" configuration based on the user's last known
     * preference until the theme is switched at runtime.
     */
    CARAPI GetBootTheme(
        /* [in] */ IContentResolver* resolver,
        /* [out] */ IThemeConfig** themeConfig);

    CARAPI GetBootThemeForUser(
        /* [in] */ IContentResolver* resolver,
        /* [in] */ Int32 userHandle,
        /* [out] */ IThemeConfig** themeConfig);

    /**
     * Represents the system framework theme, perceived by the system as there
     * being no theme applied.
     */
    CARAPI GetSystemTheme(
        /* [out] */ IThemeConfig** themeConfig);
};

} // namespace Res
} // namespace Content
} // namespace Droid
} // namespace Elastos

#endif // __ELASTOS_DROID_CONTENT_RES_CTHEMECONFIGHELPER_H__
