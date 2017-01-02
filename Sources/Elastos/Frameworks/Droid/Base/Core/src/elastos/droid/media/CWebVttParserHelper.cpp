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

#include "elastos/droid/media/CWebVttParserHelper.h"
#include "elastos/droid/media/WebVttParserHelper.h"

namespace Elastos {
namespace Droid {
namespace Media {

CAR_SINGLETON_IMPL(CWebVttParserHelper)

CAR_INTERFACE_IMPL(CWebVttParserHelper, Singleton, IWebVttParserHelper)

ECode CWebVttParserHelper::ParseFloatPercentage(
    /* [in] */ const String& s,
    /* [out] */ Float* result)
{
    return WebVttParserHelper::ParseFloatPercentage(s, result);
}

ECode CWebVttParserHelper::ParseIntPercentage(
    /* [in] */ const String& s,
    /* [out] */ Int32* result)
{
    return WebVttParserHelper::ParseIntPercentage(s, result);
}

ECode CWebVttParserHelper::ParseTimestampMs(
    /* [in] */ const String& s,
    /* [out] */ Int64* result)
{
    return WebVttParserHelper::ParseTimestampMs(s, result);
}

ECode CWebVttParserHelper::TimeToString(
    /* [in] */ Int64 timeMs,
    /* [out] */ String* result)
{
    return WebVttParserHelper::TimeToString(timeMs, result);
}

} // namespace Media
} // namepsace Droid
} // namespace Elastos