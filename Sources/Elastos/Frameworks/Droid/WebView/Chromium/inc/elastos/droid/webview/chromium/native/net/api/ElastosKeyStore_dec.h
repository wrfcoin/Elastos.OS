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
//    AndroidKeyStore.java
//put this file at the end of the include list
//so the type definition used in this file will be found
#ifndef ELASTOS_ANDROIDKEYSTORE_CALLBACK_DEC_HH
#define ELASTOS_ANDROIDKEYSTORE_CALLBACK_DEC_HH


#ifdef __cplusplus
extern "C"
{
#endif
    extern void Elastos_AndroidKeyStore_InitCallback(Handle32 cb);
#ifdef __cplusplus
}
#endif

namespace Elastos {
namespace Droid {
namespace Webkit {
namespace Webview {
namespace Chromium {
namespace Net {

struct ElaAndroidKeyStoreCallback
{
    AutoPtr<ArrayOf<Byte> > (*elastos_AndroidKeyStore_getRSAKeyModulus)(IInterface* obj, IInterface* key);
    AutoPtr<ArrayOf<Byte> > (*elastos_AndroidKeyStore_getDSAKeyParamQ)(IInterface* obj, IInterface* key);
    AutoPtr<ArrayOf<Byte> > (*elastos_AndroidKeyStore_getECKeyOrder)(IInterface* obj, IInterface* key);
    AutoPtr<ArrayOf<Byte> > (*elastos_AndroidKeyStore_getPrivateKeyEncodedBytes)(IInterface* obj, IInterface* key);
    AutoPtr<ArrayOf<Byte> > (*elastos_AndroidKeyStore_rawSignDigestWithPrivateKey)(IInterface* obj, IInterface* key, ArrayOf<Byte>* message);
    Int32 (*elastos_AndroidKeyStore_getPrivateKeyType)(IInterface* obj, IInterface* key);
    Int64 (*elastos_AndroidKeyStore_getOpenSSLHandleForPrivateKey)(IInterface* obj, IInterface* key);
    void (*elastos_AndroidKeyStore_releaseKey)(IInterface* obj, IInterface* key);
};

void* ElastosKeyStore::ElaElastosKeyStoreCallback_Init()
{
    static ElaAndroidKeyStoreCallback sElaAndroidKeyStoreCallback;

    sElaAndroidKeyStoreCallback.elastos_AndroidKeyStore_getRSAKeyModulus = &ElastosKeyStore::GetRSAKeyModulus;
    sElaAndroidKeyStoreCallback.elastos_AndroidKeyStore_getDSAKeyParamQ = &ElastosKeyStore::GetDSAKeyParamQ;
    sElaAndroidKeyStoreCallback.elastos_AndroidKeyStore_getECKeyOrder = &ElastosKeyStore::GetECKeyOrder;
    sElaAndroidKeyStoreCallback.elastos_AndroidKeyStore_getPrivateKeyEncodedBytes = &ElastosKeyStore::GetPrivateKeyEncodedBytes;
    sElaAndroidKeyStoreCallback.elastos_AndroidKeyStore_rawSignDigestWithPrivateKey = &ElastosKeyStore::RawSignDigestWithPrivateKey;
    sElaAndroidKeyStoreCallback.elastos_AndroidKeyStore_getPrivateKeyType = &ElastosKeyStore::GetPrivateKeyType;
    sElaAndroidKeyStoreCallback.elastos_AndroidKeyStore_getOpenSSLHandleForPrivateKey = &ElastosKeyStore::GetOpenSSLHandleForPrivateKey;
    sElaAndroidKeyStoreCallback.elastos_AndroidKeyStore_releaseKey = &ElastosKeyStore::ReleaseKey;

    Elastos_AndroidKeyStore_InitCallback((Handle32)&sElaAndroidKeyStoreCallback);
    return &sElaAndroidKeyStoreCallback;
}

static void* sPElaElastosKeyStoreCallback = ElastosKeyStore::ElaElastosKeyStoreCallback_Init();

} // namespace Net
} // namespace Chromium
} // namespace Webview
} // namespace Webkit
} // namespace Droid
} // namespace Elastos

#endif //ELASTOS_ANDROIDKEYSTORE_CALLBACK_DEC_HH
