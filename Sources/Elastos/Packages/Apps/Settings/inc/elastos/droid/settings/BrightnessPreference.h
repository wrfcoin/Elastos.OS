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

package com.android.settings;

using Elastos::Droid::Content::IContext;
using Elastos::Droid::Content::IIntent;
using Elastos::Droid::Os::IUserHandle;
using Elastos::Droid::Preference::IPreference;
using Elastos::Droid::Utility::IAttributeSet;

public class BrightnessPreference extends Preference {

    public BrightnessPreference(Context context, AttributeSet attrs) {
        Super(context, attrs);
    }

    //@Override
    protected void OnClick() {
        GetContext()->StartActivityAsUser(new Intent(IIntent::ACTION_SHOW_BRIGHTNESS_DIALOG),
                UserHandle.CURRENT_OR_SELF);
    }
}
