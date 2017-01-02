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

#ifndef __ELASTOS_DROID_TEXT_STYLE_ClickableSpan_H__
#define __ELASTOS_DROID_TEXT_STYLE_ClickableSpan_H__

#include "elastos/droid/text/style/CharacterStyle.h"

using Elastos::Droid::View::IView;

namespace Elastos {
namespace Droid {
namespace Text {
namespace Style {

/**
 * If an object of this type is attached to the text of a TextView
 * with a movement method of LinkMovementMethod, the affected spans of
 * text can be selected.  If clicked, the {@link #onClick} method will
 * be called.
 */
//public abstract
class ClickableSpan
    : public CharacterStyle
    , public IClickableSpan
{
public:
    CAR_INTERFACE_DECL()

    /**
     * Performs the click action associated with this span.
     */
    virtual CARAPI OnClick(
        /* [in] */ IView* widget) = 0;

    /**
     * Makes the text underlined and in the link color.
     */
    //@Override
    CARAPI UpdateDrawState(
        /* [in] */ ITextPaint* ds);
};


} // namespace Style
} // namespace Text
} // namepsace Droid
} // namespace Elastos

#endif // __ELASTOS_DROID_TEXT_STYLE_ClickableSpan_H__
