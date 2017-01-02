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

#ifndef __ELASTOS_NET_CRESPONSE_CACHE_HELPER_H__
#define __ELASTOS_NET_CRESPONSE_CACHE_HELPER_H__

#include <_Elastos_Net_CResponseCacheHelper.h>
#include "Singleton.h"

using Elastos::Core::Singleton;

namespace Elastos {
namespace Net {

CarClass(CResponseCacheHelper)
    , public Singleton
    , public IResponseCacheHelper
{
public:
    CAR_INTERFACE_DECL()

    CAR_SINGLETON_DECL()

    /**
     * Returns the system's default response cache, or null.
     */
    CARAPI GetDefault(
        /* [out] */ IResponseCache** responseCache);

    /**
     * Sets the system's default response cache. Use null to remove the response cache.
     */
    CARAPI SetDefault(
        /* [in] */ IResponseCache* responseCache);
};

} // namespace Net
} // namespace Elastos

#endif //__ELASTOS_NET_CRESPONSE_CACHE_HELPER_H__
