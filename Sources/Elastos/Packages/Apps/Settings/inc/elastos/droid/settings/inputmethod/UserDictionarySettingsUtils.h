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

#ifndef __ELASTOS_DROID_SETTINGS_INPUTMETHOD_USERDICTIONARYSETTINGSUTILS_H__
#define __ELASTOS_DROID_SETTINGS_INPUTMETHOD_USERDICTIONARYSETTINGSUTILS_H__

#include "elastos/droid/ext/frameworkdef.h"

using Elastos::Droid::Content::IContext;

namespace Elastos {
namespace Droid {
namespace Settings {
namespace Inputmethod {

/**
 * Utilities of the user dictionary settings
 */
class UserDictionarySettingsUtils
{
public:
    static CARAPI_(String) GetLocaleDisplayName(
        /* [in] */ IContext* context,
        /* [in] */ const String& localeStr);
};

} // namespace Inputmethod
} // namespace Settings
} // namespace Droid
} // namespace Elastos

#endif //__ELASTOS_DROID_SETTINGS_INPUTMETHOD_USERDICTIONARYSETTINGSUTILS_H__