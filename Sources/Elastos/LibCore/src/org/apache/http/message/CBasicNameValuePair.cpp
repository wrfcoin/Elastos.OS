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

#include "org/apache/http/message/CBasicNameValuePair.h"

namespace Org {
namespace Apache {
namespace Http {
namespace Message {

CAR_OBJECT_IMPL(CBasicNameValuePair)

ECode CBasicNameValuePair::Clone(
    /* [out] */ IInterface** obj)
{
    VALIDATE_NOT_NULL(obj)
    AutoPtr<CBasicNameValuePair> pair;
    CBasicNameValuePair::NewByFriend((CBasicNameValuePair**)&pair);
    CloneImpl((BasicNameValuePair*)pair.Get());
    return NOERROR;
}

ECode CBasicNameValuePair::constructor(
    /* [in] */ const String& name,
    /* [in] */ const String& value)
{
    return Init(name, value);
}

ECode CBasicNameValuePair::constructor()
{
    return NOERROR;
}

} // namespace Message
} // namespace Http
} // namespace Apache
} // namespace Org
