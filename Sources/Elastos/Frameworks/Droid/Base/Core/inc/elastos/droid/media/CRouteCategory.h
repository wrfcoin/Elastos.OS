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

#ifndef __ELASTOS_DROID_MEDIA_CROUTECATEGORY_H__
#define __ELASTOS_DROID_MEDIA_CROUTECATEGORY_H__

#include "_Elastos_Droid_Media_CRouteCategory.h"
#include "elastos/droid/ext/frameworkext.h"
#include "elastos/droid/media/CMediaRouter.h"

using Elastos::Utility::IList;

namespace Elastos {
namespace Droid {
namespace Media {

/**
 * Definition of a category of routes. All routes belong to a category.
 */
CarClass(CRouteCategory)
    , public CMediaRouter::RouteCategory
{
public:
    CAR_OBJECT_DECL()
};

} // namespace Media
} // namepsace Droid
} // namespace Elastos

#endif // __ELASTOS_DROID_MEDIA_CROUTECATEGORY_H__
