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
//    AwContentsStatics.java
//put this file at the end of the include list
//so the type definition used in this file will be found
#ifndef ELASTOS_AWCONTENTSSTATICS_CALLBACK_DEC_HH
#define ELASTOS_AWCONTENTSSTATICS_CALLBACK_DEC_HH


#ifdef __cplusplus
extern "C"
{
#endif
    extern void Elastos_AwContentsStatics_nativeClearClientCertPreferences(IInterface* callback);
    extern void Elastos_AwContentsStatics_nativeSetDataReductionProxyKey(const String& key);
    extern void Elastos_AwContentsStatics_nativeSetDataReductionProxyEnabled(Boolean enabled);
    extern String Elastos_AwContentsStatics_nativeGetUnreachableWebDataUrl();
    extern void Elastos_AwContentsStatics_nativeSetRecordFullDocument(Boolean recordFullDocument);
    extern void Elastos_AwContentsStatics_InitCallback(Handle32 cb);
#ifdef __cplusplus
}
#endif


namespace Elastos {
namespace Droid {
namespace Webkit {
namespace Webview {
namespace Chromium {
namespace AndroidWebview {

struct ElaAwContentsStaticsCallback
{
    void (*elastos_AwContentsStatics_clientCertificatesCleared)(IInterface* callback);
};

void* AwContentsStatics::ElaAwContentsStaticsCallback_Init()
{
    static ElaAwContentsStaticsCallback sElaAwContentsStaticsCallback;

    sElaAwContentsStaticsCallback.elastos_AwContentsStatics_clientCertificatesCleared = &AwContentsStatics::ClientCertificatesCleared;

    Elastos_AwContentsStatics_InitCallback((Handle32)&sElaAwContentsStaticsCallback);
    return &sElaAwContentsStaticsCallback;
}

static void* sPElaAwContentsStaticsCallback = AwContentsStatics::ElaAwContentsStaticsCallback_Init();

} // namespace AndroidWebview
} // namespace Chromium
} // namespace Webview
} // namespace Webkit
} // namespace Droid
} // namespace Elastos

#endif //ELASTOS_AWCONTENTSSTATICS_CALLBACK_DEC_HH
