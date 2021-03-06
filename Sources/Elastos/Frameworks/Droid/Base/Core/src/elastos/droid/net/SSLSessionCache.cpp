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

#include "_Elastos.Droid.Content.h"
#include <Elastos.CoreLibrary.Extensions.h>
#include <Elastos.CoreLibrary.IO.h>
#include <Elastos.CoreLibrary.Net.h>
#include "_Org.Conscrypt.h"
#include "elastos/droid/net/SSLSessionCache.h"
#include <elastos/utility/logging/Logger.h>

using Elastos::Droid::Content::IContext;
using Elastos::Droid::Net::ISSLSessionCache;
using Elastos::Droid::Utility::ILog;

using Elastos::IO::IFile;
using Elastos::Utility::Logging::Logger;
using Elastosx::Net::Ssl::ISSLContext;
using Elastosx::Net::Ssl::ISSLSession;
using Elastosx::Net::Ssl::ISSLSessionContext;

using Org::Conscrypt::CFileClientSessionCache;
using Org::Conscrypt::IClientSessionContext;
using Org::Conscrypt::IFileClientSessionCache;
using Org::Conscrypt::ISSLClientSessionCache;

namespace Elastos {
namespace Droid {
namespace Net {

CAR_INTERFACE_IMPL(SSLSessionCache, Object, ISSLSessionCache)

const String SSLSessionCache::TAG("SSLSessionCache");

ECode SSLSessionCache::Install(
    /* [in] */ ISSLSessionCache* cache,
    /* [in] */ ISSLContext* context)
{
    AutoPtr<ISSLSessionContext> clientContext;
    context->GetClientSessionContext((ISSLSessionContext**)&clientContext);
    if (IClientSessionContext::Probe(clientContext) != NULL) {
        IClientSessionContext::Probe(clientContext)->SetPersistentCache(
                cache == NULL ? NULL : ((SSLSessionCache*)cache)->mSessionCache);
    } else {
        String s;
        IObject::Probe(context)->ToString(&s);
        Logger::E("Incompatible SSLContext: %s", s.string());
        return E_ILLEGAL_ARGUMENT_EXCEPTION;
    }
    return NOERROR;
}

ECode SSLSessionCache::constructor(
    /* [in] */ IInterface* cache)
{
    mSessionCache = ISSLClientSessionCache::Probe(cache);
    return NOERROR;
}

ECode SSLSessionCache::constructor(
    /* [in] */ IFile* dir)
{
    AutoPtr<IFileClientSessionCache> helper;
    CFileClientSessionCache::AcquireSingleton((IFileClientSessionCache**)&helper);
    return helper->UsingDirectory(dir, (ISSLClientSessionCache**)&mSessionCache);
}

ECode SSLSessionCache::constructor(
    /* [in] */ IContext* context)
{
    AutoPtr<IFile> dir;
    context->GetDir(String("sslcache"), IContext::MODE_PRIVATE, (IFile**)&dir);
    AutoPtr<ISSLClientSessionCache> cache;
    // try {
    AutoPtr<IFileClientSessionCache> helper;
    CFileClientSessionCache::AcquireSingleton((IFileClientSessionCache**)&helper);
    ECode ec = helper->UsingDirectory(dir, (ISSLClientSessionCache**)&cache);
    // } catch (IOException e) {
    if (FAILED(ec)) {
        if (ec == (ECode)E_IO_EXCEPTION) {
            String s;
            IObject::Probe(dir)->ToString(&s);
            Logger::W(TAG, "Unable to create SSL session cache in %s, %d", s.string(), ec);
        }
        else return ec;
    }
    // }
    mSessionCache = cache;
    return NOERROR;
}

} // namespace Net
} // namespace Droid
} // namespace Elastos
