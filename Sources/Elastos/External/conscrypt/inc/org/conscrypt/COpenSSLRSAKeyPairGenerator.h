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

#ifndef __ORG_CONSCRYPT_COPENSSLRSAKEYPAIRGENERATOR_H__
#define __ORG_CONSCRYPT_COPENSSLRSAKEYPAIRGENERATOR_H__

#include "_Org_Conscrypt_COpenSSLRSAKeyPairGenerator.h"
#include "OpenSSLRSAKeyPairGenerator.h"

namespace Org {
namespace Conscrypt {

CarClass(COpenSSLRSAKeyPairGenerator)
    , public OpenSSLRSAKeyPairGenerator
{
public:
    CAR_OBJECT_DECL()
};

} // namespace Conscrypt
} // namespace Org

#endif //__ORG_CONSCRYPT_COPENSSLRSAKEYPAIRGENERATOR_H__
