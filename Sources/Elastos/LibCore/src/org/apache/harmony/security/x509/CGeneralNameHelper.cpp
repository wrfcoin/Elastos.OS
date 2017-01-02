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

#include "org/apache/harmony/security/x509/CGeneralNameHelper.h"
#include "org/apache/harmony/security/x509/CGeneralName.h"

namespace Org {
namespace Apache {
namespace Harmony {
namespace Security {
namespace X509 {

CAR_SINGLETON_IMPL(CGeneralNameHelper)

CAR_INTERFACE_IMPL(CGeneralNameHelper, Singleton, IGeneralNameHelper)

ECode CGeneralNameHelper::CheckDNS(
    /* [in] */ const String& dns)
{
    return CGeneralName::CheckDNS(dns);
}

ECode CGeneralNameHelper::CheckURI(
    /* [in] */ const String& uri)
{
    return CGeneralName::CheckURI(uri);
}

ECode CGeneralNameHelper::OidStrToInts(
    /* [in] */ const String& oid,
    /* [out, callee] */ ArrayOf<Int32>** ppInts)
{
    VALIDATE_NOT_NULL(ppInts);

    return CGeneralName::OidStrToInts(oid, ppInts);
}

ECode CGeneralNameHelper::IpStrToBytes(
    /* [in] */ const String& ip,
    /* [out, callee] */ ArrayOf<Byte>** ppBytes)
{
    VALIDATE_NOT_NULL(ppBytes);

    return CGeneralName::IpStrToBytes(ip, ppBytes);
}

ECode CGeneralNameHelper::IpBytesToStr(
    /* [in] */ ArrayOf<Byte>* pIp,
    /* [out] */ String* pStr)
{
    VALIDATE_NOT_NULL(pStr);

    return CGeneralName::IpBytesToStr(pIp, pStr);
}

ECode CGeneralNameHelper::GetASN1(
    /* [out] */ IASN1Choice** ppAsn1)
{
    VALIDATE_NOT_NULL(ppAsn1);

    return CGeneralName::GetASN1(ppAsn1);
}

ECode CGeneralNameHelper::SetASN1(
    /* [in] */ IASN1Choice* ppAsn1)
{
    return CGeneralName::SetASN1(ppAsn1);
}

} // namespace X509
} // namespace Security
} // namespace Harmony
} // namespace Apache
} // namespace Org