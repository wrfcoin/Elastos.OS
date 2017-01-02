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

#ifndef __ELASTOS_DROID_GESTURE_GESTURECONSTANTS_H__
#define __ELASTOS_DROID_GESTURE_GESTURECONSTANTS_H__

#include "elastos/droid/ext/frameworkext.h"

namespace Elastos {
namespace Droid {
namespace Gesture {

class GestureConstants
{
public:
    static const Int32 STROKE_STRING_BUFFER_SIZE = 1024;
    static const Int32 STROKE_POINT_BUFFER_SIZE = 100; // number of points

    static const Int32 IO_BUFFER_SIZE = 32 * 1024; // 32K

    static const String myLOG_TAG;
};

} // namespace Gesture
} // namespace Droid
} // namespace Elastos

#endif // __ELASTOS_DROID_GESTURE_GESTURECONSTANTS_H__
