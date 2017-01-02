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

#ifndef __ELASTOS_DROID_ACCOUNTS_CCANTADDACCOUNTACTIVITY_H__
#define __ELASTOS_DROID_ACCOUNTS_CCANTADDACCOUNTACTIVITY_H__

#include "_Elastos_Droid_Accounts_CCantAddAccountActivity.h"
#include "elastos/droid/app/Activity.h"

using Elastos::Droid::App::Activity;

namespace Elastos {
namespace Droid {
namespace Accounts {

CarClass(CCantAddAccountActivity)
    , public Activity
    , public ICantAddAccountActivity
{
public:
    CAR_OBJECT_DECL()

    CAR_INTERFACE_DECL()

    CARAPI OnCreate(
        /* [in] */ IBundle* savedInstanceState);

    CARAPI OnCancelButtonClicked(
        /* [in] */ IView* view);
};

} // namespace Accounts
} // namespace Droid
} // namespace Elastos

#endif //__ELASTOS_DROID_ACCOUNTS_CCANTADDACCOUNTACTIVITY_H__
