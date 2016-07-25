#ifndef __ELASTOS_DROID_INTERNAL_TELEPHONY_UICC_RUIMFILEHANDLER_H__
#define __ELASTOS_DROID_INTERNAL_TELEPHONY_UICC_RUIMFILEHANDLER_H__

#include "elastos/droid/ext/frameworkext.h"
#include "elastos/droid/internal/telephony/uicc/IccFileHandler.h"

using Elastos::Droid::Internal::Telephony::ICommandsInterface;

namespace Elastos {
namespace Droid {
namespace Internal {
namespace Telephony {
namespace Uicc {

/**
  * {@hide}
  */
class RuimFileHandler
    : public IccFileHandler
    , public IRuimFileHandler
{
public:
    TO_STRING_IMPL("RuimFileHandler")

    CAR_INTERFACE_DECL();

    RuimFileHandler();

    //***** Constructor
    CARAPI  constructor(
        /* [in] */ IUiccCardApplication* app,
        /* [in] */ const String& aid,
        /* [in] */ ICommandsInterface* ci);

    //***** Overridden from IccFileHandler
    // @Override
    CARAPI LoadEFImgTransparent(
        /* [in] */ Int32 fileid,
        /* [in] */ Int32 highOffset,
        /* [in] */ Int32 lowOffset,
        /* [in] */ Int32 length,
        /* [in] */ IMessage* onLoaded);

protected:
    // @Override
    CARAPI_(String) GetEFPath(
        /* [in] */ Int32 efid);

    // @Override
    CARAPI Logd(
        /* [in] */ const String& msg);

    // @Override
    CARAPI Loge(
        /* [in] */ const String& msg);

public:
    static const String LOGTAG;
};

} // namespace Uicc
} // namespace Telephony
} // namespace Internal
} // namespace Droid
} // namespace Elastos

#endif // __ELASTOS_DROID_INTERNAL_TELEPHONY_UICC_RUIMFILEHANDLER_H__

