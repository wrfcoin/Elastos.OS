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

//This file is autogenerated for
//    UsbMidiDeviceAndroid.java
//put this file at the end of the include list
//so the type definition used in this file will be found
#ifndef ELASTOS_USBMIDIDEVICEANDROID_CALLBACK_DEC_HH
#define ELASTOS_USBMIDIDEVICEANDROID_CALLBACK_DEC_HH


#ifdef __cplusplus
extern "C"
{
#endif
    extern void Elastos_UsbMidiDeviceAndroid_nativeOnData(Handle64 nativeUsbMidiDeviceAndroid,Int32 endpointNumber,ArrayOf<Byte>* data);
    extern void Elastos_UsbMidiDeviceAndroid_InitCallback(Handle64 cb);
#ifdef __cplusplus
}
#endif


namespace Elastos {
namespace Droid {
namespace Webkit {
namespace Webview {
namespace Chromium {
namespace Media {

struct ElaUsbMidiDeviceAndroidCallback
{
    void (*elastos_UsbMidiDeviceAndroid_registerSelf)(IInterface* obj, Handle64 nativePointer);
    void (*elastos_UsbMidiDeviceAndroid_send)(IInterface* obj, Int32 endpointNumber, ArrayOf<Byte>* bs);
    AutoPtr<ArrayOf<Byte> > (*elastos_UsbMidiDeviceAndroid_getDescriptors)(IInterface* obj);
    void (*elastos_UsbMidiDeviceAndroid_close)(IInterface* obj);
};

void* UsbMidiDeviceElastos::ElaUsbMidiDeviceElastosCallback_Init()
{
    static ElaUsbMidiDeviceAndroidCallback sElaUsbMidiDeviceAndroidCallback;

    sElaUsbMidiDeviceAndroidCallback.elastos_UsbMidiDeviceAndroid_registerSelf = &UsbMidiDeviceElastos::RegisterSelf;
    sElaUsbMidiDeviceAndroidCallback.elastos_UsbMidiDeviceAndroid_send = &UsbMidiDeviceElastos::Send;
    sElaUsbMidiDeviceAndroidCallback.elastos_UsbMidiDeviceAndroid_getDescriptors = &UsbMidiDeviceElastos::GetDescriptors;
    sElaUsbMidiDeviceAndroidCallback.elastos_UsbMidiDeviceAndroid_close = &UsbMidiDeviceElastos::Close;

    Elastos_UsbMidiDeviceAndroid_InitCallback((Handle64)&sElaUsbMidiDeviceAndroidCallback);
    return &sElaUsbMidiDeviceAndroidCallback;
}

static void* sPElaUsbMidiDeviceAndroidCallback = UsbMidiDeviceElastos::ElaUsbMidiDeviceElastosCallback_Init();

} // namespace Media
} // namespace Chromium
} // namespace Webview
} // namespace Webkit
} // namespace Droid
} // namespace Elastos

#endif //ELASTOS_USBMIDIDEVICEANDROID_CALLBACK_DEC_HH
