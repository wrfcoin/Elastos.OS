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

#ifndef __ELASTOS_DROID_TEXT_CSELECTION_H__
#define __ELASTOS_DROID_TEXT_CSELECTION_H__

#include "_Elastos_Droid_Text_CSelection.h"
#include <elastos/core/Singleton.h>

using Elastos::Core::ICharSequence;

namespace Elastos {
namespace Droid {
namespace Text {

/**
 * Utility class for manipulating cursors and selections in CharSequences.
 * A cursor is a selection where the start and end are at the same offset.
 */
CarClass(CSelection)
    , public Singleton
    , public ISelection
{
public:
    CAR_INTERFACE_DECL()

    CAR_SINGLETON_DECL()

    CARAPI GetSelectionStart(
        /* [in] */ ICharSequence* text,
        /* [out] */ Int32* start);

    CARAPI GetSelectionEnd(
        /* [in] */ ICharSequence* text,
        /* [out] */ Int32* end);

    CARAPI SetSelection(
        /* [in] */ ISpannable* text,
        /* [in] */ Int32 start,
        /* [in] */ Int32 stop);

    CARAPI SetSelection(
        /* [in] */ ISpannable* text,
        /* [in] */ Int32 index);

    CARAPI SelectAll(
        /* [in] */ ISpannable* text);

    CARAPI ExtendSelection(
        /* [in] */ ISpannable* text,
        /* [in] */ Int32 index);

    CARAPI RemoveSelection(
        /* [in] */ ISpannable* text);

    CARAPI MoveUp(
        /* [in] */ ISpannable* text,
        /* [in] */ ILayout* layout,
        /* [out] */ Boolean* result);

    CARAPI MoveDown(
        /* [in] */ ISpannable* text,
        /* [in] */ ILayout* layout,
        /* [out] */ Boolean* result);

    CARAPI MoveLeft(
        /* [in] */ ISpannable* text,
        /* [in] */ ILayout* layout,
        /* [out] */ Boolean* result);

    CARAPI MoveRight(
        /* [in] */ ISpannable* text,
        /* [in] */ ILayout* layout,
        /* [out] */ Boolean* result);

    CARAPI ExtendUp(
        /* [in] */ ISpannable* text,
        /* [in] */ ILayout* layout,
        /* [out] */ Boolean* result);

    CARAPI ExtendDown(
        /* [in] */ ISpannable* text,
        /* [in] */ ILayout* layout,
        /* [out] */ Boolean* result);

    CARAPI ExtendLeft(
        /* [in] */ ISpannable* text,
        /* [in] */ ILayout* layout,
        /* [out] */ Boolean* result);

    CARAPI ExtendRight(
        /* [in] */ ISpannable* text,
        /* [in] */ ILayout* layout,
        /* [out] */ Boolean* result);

    CARAPI ExtendToLeftEdge(
        /* [in] */ ISpannable* text,
        /* [in] */ ILayout* layout,
        /* [out] */ Boolean* result);

    CARAPI ExtendToRightEdge(
        /* [in] */ ISpannable* text,
        /* [in] */ ILayout* layout,
        /* [out] */ Boolean* result);

    CARAPI MoveToLeftEdge(
        /* [in] */ ISpannable* text,
        /* [in] */ ILayout* layout,
        /* [out] */ Boolean* result);

    CARAPI MoveToRightEdge(
        /* [in] */ ISpannable* text,
        /* [in] */ ILayout* layout,
        /* [out] */ Boolean* result);

    /** {@hide} */
    CARAPI MoveToPreceding(
        /* [in] */ ISpannable* text,
        /* [in] */ ISelectionPositionIterator* iter,
        /* [in] */ Boolean extendSelection,
        /* [out] */ Boolean* result);

    /** {@hide} */
    CARAPI MoveToFollowing(
        /* [in] */ ISpannable* text,
        /* [in] */ ISelectionPositionIterator* iter,
        /* [in] */ Boolean extendSelection,
        /* [out] */ Boolean* result);

    CARAPI GetSelectionStartObject(
        /* [out] */ IInterface** start);

    CARAPI GetSelectionEndObject(
        /* [out] */ IInterface** end);
};

} // namespace Text
} // namepsace Droid
} // namespace Elastos

#endif // __CSELECTIONHELPER_H__
