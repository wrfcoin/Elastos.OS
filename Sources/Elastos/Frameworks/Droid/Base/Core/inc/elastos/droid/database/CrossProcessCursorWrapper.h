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

#ifndef __ELASTOS_DROID_DATABASE_CROSSPROCESSCURSORWRAPPER_H__
#define __ELASTOS_DROID_DATABASE_CROSSPROCESSCURSORWRAPPER_H__

#include "elastos/droid/database/CursorWrapper.h"

namespace Elastos {
namespace Droid {
namespace Database {
/**
 * Cursor wrapper that implements {@link CrossProcessCursor}.
 * <p>
 * If the wrapped cursor implements {@link CrossProcessCursor}, then the wrapper
 * delegates {@link #fillWindow}, {@link #getWindow()} and {@link #onMove} to it.
 * Otherwise, the wrapper provides default implementations of these methods that
 * traverse the contents of the cursor similar to {@link AbstractCursor#fillWindow}.
 * </p><p>
 * This wrapper can be used to adapt an ordinary {@link Cursor} into a
 * {@link CrossProcessCursor}.
 * </p>
 */
class CrossProcessCursorWrapper
    : public CursorWrapper
    , public ICrossProcessCursorWrapper
    , public ICrossProcessCursor
{
public:
    CAR_INTERFACE_DECL()

    TO_STRING_IMPL("CrossProcessCursorWrapper")

    //@Override
    virtual CARAPI FillWindow(
        /* [in] */ Int32 position,
        /* [in] */ ICursorWindow* window);

    //@Override
    virtual CARAPI GetWindow(
        /* [out] */ ICursorWindow** window);

    //@Override
    virtual CARAPI OnMove(
        /* [in] */ Int32 oldPosition,
        /* [in] */ Int32 newPosition,
        /* [out] */ Boolean* result);
};

} //Database
} //Droid
} //Elastos

#endif //__ELASTOS_DROID_DATABASE_CROSSPROCESSCURSORWRAPPER_H__
