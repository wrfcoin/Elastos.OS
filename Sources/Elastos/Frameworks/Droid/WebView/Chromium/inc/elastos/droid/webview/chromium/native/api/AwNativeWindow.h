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

#ifndef __ELASTOS_DROID_WEBKIT_WEBVIEW_CHROMIUM_NATIVE_API_AWBYTEBUFFER_H__
#define __ELASTOS_DROID_WEBKIT_WEBVIEW_CHROMIUM_NATIVE_API_AWBYTEBUFFER_H__

#include "elastos/droid/ext/frameworkext.h"
#include <android/native_window.h>

namespace Elastos {
namespace Droid {
namespace Webkit {
namespace Webview {
namespace Chromium {
namespace Api {

class AwNativeWindow
{
public:
    static CARAPI_(void*) ElaNativeWindowCallback_Init();

private:
    static CARAPI_(ANativeWindow*) GetFromSurface(
        /* [in] */ IInterface* obj);
};

} // namespace Api
} // namespace Chromium
} // namespace Webview
} // namespace Webkit
} // namespace Droid
} // namespace Elastos

#endif //__ELASTOS_DROID_WEBKIT_WEBVIEW_CHROMIUM_NATIVE_API_AWBYTEBUFFER_H__
