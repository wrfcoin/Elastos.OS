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
//    InterstitialPageDelegateAndroid.java
//put this file at the end of the include list
//so the type definition used in this file will be found
#ifndef ELASTOS_INTERSTITIALPAGEDELEGATEANDROID_CALLBACK_DEC_HH
#define ELASTOS_INTERSTITIALPAGEDELEGATEANDROID_CALLBACK_DEC_HH


#ifdef __cplusplus
extern "C"
{
#endif
    extern Handle64 Elastos_InterstitialPageDelegateAndroid_nativeInit(IInterface* caller,const String& htmlContent);
    extern void Elastos_InterstitialPageDelegateAndroid_nativeProceed(IInterface* caller,Handle64 nativeInterstitialPageDelegateElastos);
    extern void Elastos_InterstitialPageDelegateAndroid_nativeDontProceed(IInterface* caller,Handle64 nativeInterstitialPageDelegateElastos);
    extern void Elastos_InterstitialPageDelegateAndroid_InitCallback(Handle64 cb);
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

struct ElaInterstitialPageDelegateAndroidCallback
{
    void (*elastos_InterstitialPageDelegateAndroid_onProceed)(IInterface* obj);
    void (*elastos_InterstitialPageDelegateAndroid_onDontProceed)(IInterface* obj);
    void (*elastos_InterstitialPageDelegateAndroid_commandReceived)(IInterface* obj, const String& command);
    void (*elastos_InterstitialPageDelegateAndroid_onNativeDestroyed)(IInterface* obj);
};

void* InterstitialPageDelegateElastos::ElaInterstitialPageDelegateElastosCallback_Init()
{
    static ElaInterstitialPageDelegateAndroidCallback sElaInterstitialPageDelegateAndroidCallback;

    sElaInterstitialPageDelegateAndroidCallback.elastos_InterstitialPageDelegateAndroid_onProceed = &InterstitialPageDelegateElastos::OnProceed;
    sElaInterstitialPageDelegateAndroidCallback.elastos_InterstitialPageDelegateAndroid_onDontProceed = &InterstitialPageDelegateElastos::OnDontProceed;
    sElaInterstitialPageDelegateAndroidCallback.elastos_InterstitialPageDelegateAndroid_commandReceived = &InterstitialPageDelegateElastos::CommandReceived;
    sElaInterstitialPageDelegateAndroidCallback.elastos_InterstitialPageDelegateAndroid_onNativeDestroyed = &InterstitialPageDelegateElastos::OnNativeDestroyed;

    Elastos_InterstitialPageDelegateAndroid_InitCallback((Handle64)&sElaInterstitialPageDelegateAndroidCallback);
    return &sElaInterstitialPageDelegateAndroidCallback;
}

static void* sPElaInterstitialPageDelegateElastosCallback = InterstitialPageDelegateElastos::ElaInterstitialPageDelegateElastosCallback_Init();

} // namespace Browser
} // namespace Content
} // namespace Chromium
} // namespace Webview
} // namespace Webkit
} // namespace Droid
} // namespace Elastos

#endif //ELASTOS_INTERSTITIALPAGEDELEGATEANDROID_CALLBACK_DEC_HH
