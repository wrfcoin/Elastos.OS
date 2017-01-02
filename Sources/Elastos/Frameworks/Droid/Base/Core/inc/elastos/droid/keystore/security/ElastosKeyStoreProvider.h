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

#ifndef _ELASTOS_DROID_KEYSTORE_SECURITY_ELASTOSKEYSTOREPROVIDER_H
#define _ELASTOS_DROID_KEYSTORE_SECURITY_ELASTOSKEYSTOREPROVIDER_H

#include "Elastos.Droid.KeyStore.h"
#include "elastos/security/Provider.h"

namespace Elastos {
namespace Droid {
namespace KeyStore {
namespace Security {

/**
 * A provider focused on providing JCA interfaces for the Android KeyStore.
 *
 * @hide
 */
class ElastosKeyStoreProvider
    : public Elastos::Security::Provider
    , public IElastosKeyStoreProvider
{
public:
    CAR_INTERFACE_DECL();

    ElastosKeyStoreProvider();

    CARAPI constructor();
};

}// namespace Elastos
}// namespace Droid
}// namespace KeyStore
}// namespace Security

#endif // _ELASTOS_DROID_KEYSTORE_SECURITY_ELASTOSKEYSTOREPROVIDER_H
