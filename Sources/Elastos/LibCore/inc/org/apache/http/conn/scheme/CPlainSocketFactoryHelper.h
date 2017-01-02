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

#ifndef __ORG_APACHE_HTTP_CONN_SCHEME_CPLAINSOCKETFACTORYHELPER_H_
#define __ORG_APACHE_HTTP_CONN_SCHEME_CPLAINSOCKETFACTORYHELPER_H_

#include "_Org_Apache_Http_Conn_Scheme_CPlainSocketFactoryHelper.h"
#include "elastos/core/Singleton.h"

namespace Org {
namespace Apache {
namespace Http {
namespace Conn {
namespace Scheme {

CarClass(CPlainSocketFactoryHelper)
    , public Singleton
    , public IPlainSocketFactoryHelper
{
public:
    CAR_INTERFACE_DECL()

    CAR_SINGLETON_DECL()

    CARAPI GetSocketFactory(
        /* [out] */ IPlainSocketFactory** socketFactory);
};

} // namespace Scheme
} // namespace Conn
} // namespace Http
} // namespace Apache
} // namespace Org

#endif // __ORG_APACHE_HTTP_CONN_SCHEME_CPLAINSOCKETFACTORYHELPER_H_
