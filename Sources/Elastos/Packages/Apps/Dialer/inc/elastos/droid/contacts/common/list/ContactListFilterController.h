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

#ifndef __ELASTOS_DROID_CONTACTS_COMMON_LIST_CONTACTLISTFILTERCONTROLLER_H__
#define __ELASTOS_DROID_CONTACTS_COMMON_LIST_CONTACTLISTFILTERCONTROLLER_H__

#include "_Elastos.Droid.Dialer.h"
#include <elastos/core/Object.h>

using Elastos::Droid::Content::IContext;
using Elastos::Core::Object;

namespace Elastos {
namespace Droid {
namespace Contacts {
namespace Common {
namespace List {

/**
 * Constructs shortcut intents.
 */
class ContactListFilterController
    : public Object
    , public IContactListFilterController
{
public:
    CAR_INTERFACE_DECL()

    static CARAPI_(AutoPtr<IContactListFilterController>) GetInstance(
        /* [in] */ IContext* context);
};

} // List
} // Common
} // Contacts
} // Droid
} // Elastos

#endif //__ELASTOS_DROID_CONTACTS_COMMON_LIST_CONTACTLISTFILTERCONTROLLER_H__
