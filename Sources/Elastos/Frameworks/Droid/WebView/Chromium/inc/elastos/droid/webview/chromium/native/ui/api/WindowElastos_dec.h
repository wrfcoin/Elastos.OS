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
//    WindowAndroid.java
//put this file at the end of the include list
//so the type definition used in this file will be found
#ifndef ELASTOS_WINDOWANDROID_CALLBACK_DEC_HH
#define ELASTOS_WINDOWANDROID_CALLBACK_DEC_HH


#ifdef __cplusplus
extern "C"
{
#endif
    extern Handle64 Elastos_WindowAndroid_nativeInit(IInterface* caller,Int64 vsyncPeriod);
    extern void Elastos_WindowAndroid_nativeOnVSync(IInterface* caller,Handle64 nativeWindowAndroid,Int64 vsyncTimeMicros);
    extern void Elastos_WindowAndroid_nativeDestroy(IInterface* caller,Handle64 nativeWindowAndroid);
    extern void Elastos_WindowAndroid_InitCallback(Handle64 cb);
#ifdef __cplusplus
}
#endif


namespace Elastos {
namespace Droid {
namespace Webkit {
namespace Webview {
namespace Chromium {
namespace Ui {
namespace Base {

struct ElaWindowAndroidCallback
{
    void (*elastos_WindowAndroid_requestVSyncUpdate)(IInterface* obj);
};

void* WindowElastos::ElaWindowElastosCallback_Init()
{
    static ElaWindowAndroidCallback sElaWindowAndroidCallback;

    sElaWindowAndroidCallback.elastos_WindowAndroid_requestVSyncUpdate = &WindowElastos::RequestVSyncUpdate;

    Elastos_WindowAndroid_InitCallback((Handle64)&sElaWindowAndroidCallback);
    return &sElaWindowAndroidCallback;
}

static void* sPElaWindowElastosCallback = WindowElastos::ElaWindowElastosCallback_Init();

} // namespace Base
} // namespace Ui
} // namespace Chromium
} // namespace Webview
} // namespace Webkit
} // namespace Droid
} // namespace Elastos

#endif //ELASTOS_WINDOWANDROID_CALLBACK_DEC_HH
