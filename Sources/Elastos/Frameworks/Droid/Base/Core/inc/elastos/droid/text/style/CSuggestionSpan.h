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

#ifndef __ELASTOS_DROID_TEXT_STYLE_CSUGGESTIONSPAN_H__
#define __ELASTOS_DROID_TEXT_STYLE_CSUGGESTIONSPAN_H__

#include "_Elastos_Droid_Text_Style_CSuggestionSpan.h"
#include "elastos/droid/text/style/SuggestionSpan.h"


namespace Elastos {
namespace Droid {
namespace Text {
namespace Style {

CarClass(CSuggestionSpan)
    , public SuggestionSpan
{
public:
    CAR_OBJECT_DECL()
};

} // namespace Style
} // namespace Text
} // namepsace Droid
} // namespace Elastos

#endif // __ELASTOS_DROID_TEXT_STYLE_CSUGGESTIONSPAN_H__
