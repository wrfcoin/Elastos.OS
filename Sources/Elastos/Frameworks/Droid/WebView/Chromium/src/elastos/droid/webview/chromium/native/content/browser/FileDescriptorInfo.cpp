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

// wuweizuo automatic build .cpp file from .java file.

#include "elastos/droid/webkit/webview/chromium/native/content/browser/FileDescriptorInfo.h"

namespace Elastos {
namespace Droid {
namespace Webkit {
namespace Webview {
namespace Chromium {
namespace Content {
namespace Browser {

//=====================================================================
//                          FileDescriptorInfo
//=====================================================================
FileDescriptorInfo::FileDescriptorInfo(
    /* [in] */ Int32 id,
    /* [in] */ Int32 fd,
    /* [in] */ Boolean autoClose)
    : mId(id)
    , mFd(fd)
    , mAutoClose(autoClose)
{
}

} // namespace Browser
} // namespace Content
} // namespace Chromium
} // namespace Webview
} // namespace Webkit
} // namespace Droid
} // namespace Elastos
