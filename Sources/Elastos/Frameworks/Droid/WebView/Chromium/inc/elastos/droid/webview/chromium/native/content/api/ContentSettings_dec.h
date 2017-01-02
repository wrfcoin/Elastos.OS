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

//This file is autogenerated for
//    ContentSettings.java
//put this file at the end of the include list
//so the type definition used in this file will be found
#ifndef ELASTOS_CONTENTSETTINGS_CALLBACK_DEC_HH
#define ELASTOS_CONTENTSETTINGS_CALLBACK_DEC_HH


#ifdef __cplusplus
extern "C"
{
#endif
    extern Handle64 Elastos_ContentSettings_nativeInit(IInterface* caller,Handle64 contentViewPtr);
    extern Boolean Elastos_ContentSettings_nativeGetJavaScriptEnabled(IInterface* caller,Handle64 nativeContentSettings);
    extern void Elastos_ContentSettings_InitCallback(Handle64 cb);
#ifdef __cplusplus
}
#endif


namespace Elastos {
namespace Droid {
namespace Webkit {
namespace Webview {
namespace Chromium {
namespace Content {
namespace Browser {

struct ElaContentSettingsCallback
{
    void (*elastos_ContentSettings_onNativeContentSettingsDestroyed)(IInterface* obj, Handle64 nativeContentSettings);
};

void* ContentSettings::ElaContentSettingsCallback_Init()
{
    static ElaContentSettingsCallback sElaContentSettingsCallback;

    sElaContentSettingsCallback.elastos_ContentSettings_onNativeContentSettingsDestroyed = &ContentSettings::OnNativeContentSettingsDestroyed;

    Elastos_ContentSettings_InitCallback((Handle64)&sElaContentSettingsCallback);
    return &sElaContentSettingsCallback;
}

static void* sPElaContentSettingsCallback = ContentSettings::ElaContentSettingsCallback_Init();

} // namespace Browser
} // namespace Content
} // namespace Chromium
} // namespace Webview
} // namespace Webkit
} // namespace Droid
} // namespace Elastos

#endif //ELASTOS_CONTENTSETTINGS_CALLBACK_DEC_HH
