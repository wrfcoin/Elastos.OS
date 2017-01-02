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

#include <Elastos.CoreLibrary.IO.h>
#include "Elastos.Droid.Database.h"
#include "elastos/droid/content/CursorEntityIterator.h"

namespace Elastos {
namespace Droid {
namespace Content {

CAR_INTERFACE_IMPL(CursorEntityIterator, Object, ICursorEntityIterator)

CursorEntityIterator::CursorEntityIterator()
    : mIsClosed(FALSE)
{}

CursorEntityIterator::~CursorEntityIterator()
{}

ECode CursorEntityIterator::constructor(
    /* [in] */ ICursor* cursor)
{
    VALIDATE_NOT_NULL(cursor)

    mCursor = cursor;
    Boolean succeeded = FALSE;
    return mCursor->MoveToFirst(&succeeded);
}

ECode CursorEntityIterator::HasNext(
    /* [out] */ Boolean* value)
{
    VALIDATE_NOT_NULL(value)
    *value = FALSE;

    if (mIsClosed) {
        //throw new IllegalStateException("calling hasNext() when the iterator is closed");
        return E_ILLEGAL_STATE_EXCEPTION;
    }

    Boolean ret = FALSE;
    FAIL_RETURN(mCursor->IsAfterLast(&ret));
    *value = !ret;
    return NOERROR;
}

ECode CursorEntityIterator::GetNext(
    /* [out] */ IEntity** entity)
{
    VALIDATE_NOT_NULL(entity)
    *entity = NULL;

    if (mIsClosed) {
        //throw new IllegalStateException("calling next() when the iterator is closed");
        return E_ILLEGAL_STATE_EXCEPTION;
    }

    Boolean has = FALSE;
    if (!(HasNext(&has), has)) {
        //throw new IllegalStateException("you may only call next() if hasNext() is true");
        return E_ILLEGAL_STATE_EXCEPTION;
    }

    return GetEntityAndIncrementCursor(mCursor, entity);
}

ECode CursorEntityIterator::Remove()
{
    //throw new UnsupportedOperationException("remove not supported by EntityIterators");
    return E_UNSUPPORTED_OPERATION_EXCEPTION;
}

ECode CursorEntityIterator::Reset()
{
    if (mIsClosed) {
        //throw new IllegalStateException("calling reset() when the iterator is closed");
        return E_ILLEGAL_STATE_EXCEPTION;
    }

    Boolean ret = FALSE;
    return mCursor->MoveToFirst(&ret);
}

ECode CursorEntityIterator::Close()
{
    if (mIsClosed) {
        //throw new IllegalStateException("closing when already closed");
        return E_ILLEGAL_STATE_EXCEPTION;
    }

    mIsClosed = TRUE;
    return ICloseable::Probe(mCursor)->Close();
}

} // namespace Content
} // namespace Droid
} // namespace Elastos