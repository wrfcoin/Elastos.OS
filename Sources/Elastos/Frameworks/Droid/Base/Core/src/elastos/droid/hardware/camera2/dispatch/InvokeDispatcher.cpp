
#include "elastos/droid/hardware/camera2/dispatch/InvokeDispatcher.h"
#include "elastos/droid/internal/utility/Preconditions.h"
#include <elastos/utility/logging/Logger.h>

using Elastos::Droid::Internal::Utility::Preconditions;
using Elastos::Utility::Logging::Logger;

namespace Elastos {
namespace Droid {
namespace Hardware {
namespace Camera2 {
namespace Dispatch {

CAR_INTERFACE_IMPL_2(InvokeDispatcher, Object, IInvokeDispatcher, IDispatchable)

const String InvokeDispatcher::TAG("InvocationSink");

InvokeDispatcher::InvokeDispatcher()
{
}

ECode InvokeDispatcher::constructor(
    /* [in] */ IInterface* target)
{
    FAIL_RETURN(Preconditions::CheckNotNull(target, String("target must not be null")))

    mTarget = target;
    return NOERROR;
}

ECode InvokeDispatcher::Dispatch(
    /* [in] */ IMethodInfo* method,
    /* [in] */ IArgumentList* args)
{
    //try {
    ECode ec = method->Invoke(mTarget, args);
    if (FAILED(ec)) {
        Logger::E(TAG, "Invoke method failed!");
        return ec;
    }
    // //} catch (InvocationTargetException e) {
    //     Throwable t = e.getTargetException();
    //     // Potential UB. Hopefully 't' is a runtime exception.
    //     UncheckedThrow.throwAnyException(t);
    // //} catch (IllegalAccessException e) {
    //     // Impossible
    //     Log.wtf(TAG, "IllegalAccessException while invoking " + method, e);
    // //} catch (IllegalArgumentException e) {
    //     // Impossible
    //     Log.wtf(TAG, "IllegalArgumentException while invoking " + method, e);
    // //}

    return ec;
}

} // namespace Dispatch
} // namespace Camera2
} // namespace Hardware
} // namespace Droid
} // namespace Elastos
