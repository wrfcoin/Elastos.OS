#ifndef __ELASTOS_DROID_INTERNAL_TELEPHONY_UICC_CICCRECORDS_H__
#define __ELASTOS_DROID_INTERNAL_TELEPHONY_UICC_CICCRECORDS_H__

#include "elastos/droid/internal/telephony/uicc/IccRecords.h"
#include "_Elastos_Droid_Internal_Telephony_Uicc_CIccRecords.h"

namespace Elastos {
namespace Droid {
namespace Internal {
namespace Telephony {
namespace Uicc {

CarClass(CIccRecords)
    , public IccRecords
{
public:
    CAR_OBJECT_DECL()
};

} // namespace Uicc
} // namespace Telephony
} // namespace Internal
} // namespace Droid
} // namespace Elastos

#endif // __ELASTOS_DROID_INTERNAL_TELEPHONY_UICC_CICCRECORDS_H__