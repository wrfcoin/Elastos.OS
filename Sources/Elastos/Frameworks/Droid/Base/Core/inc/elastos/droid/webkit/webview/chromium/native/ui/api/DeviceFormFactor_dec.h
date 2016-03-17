//This file is autogenerated for
//    DeviceFormFactor.java
//put this file at the end of the include list
//so the type definition used in this file will be found
#ifndef ELASTOS_DEVICEFORMFACTOR_CALLBACK_DEC_HH
#define ELASTOS_DEVICEFORMFACTOR_CALLBACK_DEC_HH


#ifdef __cplusplus
extern "C"
{
#endif
    extern void Elastos_DeviceFormFactor_InitCallback(Handle32 cb);
#ifdef __cplusplus
}
#endif

namespace Elastos {
namespace Droid {
namespace Webkit {
namespace Webview {
namespace Chromium {
namespace Ui {
namespace Base {

struct ElaDeviceFormFactorCallback
{
    Boolean (*elastos_DeviceFormFactor_isTablet)(IInterface* context);
};

void* DeviceFormFactor::ElaDeviceFormFactorCallback_Init()
{
    static ElaDeviceFormFactorCallback sElaDeviceFormFactorCallback;

    sElaDeviceFormFactorCallback.elastos_DeviceFormFactor_isTablet = &DeviceFormFactor::IsTablet;

    Elastos_DeviceFormFactor_InitCallback((Handle32)&sElaDeviceFormFactorCallback);
    return &sElaDeviceFormFactorCallback;
}

static void* sPElaDeviceFormFactorCallback = DeviceFormFactor::ElaDeviceFormFactorCallback_Init();

} // namespace Base
} // namespace Ui
} // namespace Chromium
} // namespace Webview
} // namespace Webkit
} // namespace Droid
} // namespace Elastos

#endif //ELASTOS_DEVICEFORMFACTOR_CALLBACK_DEC_HH