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

#ifndef __ELASTOS_DROID_APP_PACKAGE_DELETE_OBSERVER_H__
#define __ELASTOS_DROID_APP_PACKAGE_DELETE_OBSERVER_H__

#include "elastos/droid/ext/frameworkext.h"
#include "Elastos.Droid.App.h"
#include "Elastos.Droid.Content.h"
#include <elastos/core/Object.h>

using Elastos::Droid::Content::IIntent;
using Elastos::Droid::Content::Pm::IIPackageDeleteObserver2;
using Elastos::Core::Object;

namespace Elastos {
namespace Droid {
namespace App {

/** {@hide} */
class ECO_PUBLIC PackageDeleteObserver
    : public Object
    , public IPackageDeleteObserver
{
public:
    CARAPI constructor();

    CAR_INTERFACE_DECL()

    virtual ~PackageDeleteObserver() {}

    /** {@hide} */
    CARAPI GetBinder(
        /* [out] */ IIPackageDeleteObserver2** observer);

    CARAPI OnUserActionRequired(
        /* [in] */ IIntent* intent);

    CARAPI OnPackageDeleted(
        /* [in] */ const String& basePackageName,
        /* [in] */ Int32 returnCode,
        /* [in] */ const String& msg);

private:
    AutoPtr<IIPackageDeleteObserver2> mBinder;
};

} // namespace App
} // namespace Droid
} // namespace Elastos

#endif // __ELASTOS_DROID_APP_PACKAGE_DELETE_OBSERVER_H__

