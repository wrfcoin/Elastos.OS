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

#include "elastos/droid/ext/frameworkdef.h"
#include "elastos/droid/net/http/CSslError.h"
#include "elastos/droid/net/http/CSslErrorHelper.h"

namespace Elastos {
namespace Droid {
namespace Net {
namespace Http {

CAR_INTERFACE_IMPL(CSslErrorHelper, Singleton, ISslErrorHelper)

CAR_SINGLETON_IMPL(CSslErrorHelper)

ECode CSslErrorHelper::SslErrorFromChromiumErrorCode(
    /* [in] */ Int32 error,
    /* [in] */ ISslCertificate* cert,
    /* [in] */ const String& url,
    /* [out] */ ISslError** sslError)
{
    return SslError::SslErrorFromChromiumErrorCode(error, cert, url, sslError);
}

} // namespace Http
} // namespace Net
} // namespace Droid
} // namespace Elastos
