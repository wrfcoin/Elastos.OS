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

#include "elastos/droid/bluetooth/le/CScanRecordHelper.h"

namespace Elastos {
namespace Droid {
namespace Bluetooth {
namespace LE {

CAR_INTERFACE_IMPL(CScanRecordHelper, Singleton, IScanRecordHelper)
CAR_SINGLETON_IMPL(CScanRecordHelper)

ECode CScanRecordHelper::ParseFromBytes(
    /* [in] */ ArrayOf<Byte>* scanRecord,
    /* [out] */ IScanRecord** record)
{
    VALIDATE_NOT_NULL(record);
    AutoPtr<IScanRecord> result = ScanRecord::ParseFromBytes(scanRecord);
    *record = result;
    REFCOUNT_ADD(*record);
    return NOERROR;
}


} // namespace LE
} // namespace Bluetooth
} // namespace Droid
} // namespace Elastos
