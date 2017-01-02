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

#ifndef __ELASTOS_DROID_MEDIA_CTHUMBNAILUTILS_H__
#define __ELASTOS_DROID_MEDIA_CTHUMBNAILUTILS_H__

#include "_Elastos_Droid_Media_CThumbnailUtils.h"
#include "elastos/droid/ext/frameworkext.h"
#include <elastos/core/Singleton.h>

using Elastos::Droid::Content::IContext;
using Elastos::Droid::Graphics::IBitmap;

namespace Elastos {
namespace Droid {
namespace Media {

CarClass(CThumbnailUtils)
    , public Singleton
    , public IThumbnailUtils
{
public:
    CAR_SINGLETON_DECL()

    CAR_INTERFACE_DECL()

    /**
     * This method first examines if the thumbnail embedded in EXIF is bigger than our target
     * size. If not, then it'll create a thumbnail from original image. Due to efficiency
     * consideration, we want to let MediaThumbRequest avoid calling this method twice for
     * both kinds, so it only requests for MICRO_KIND and set saveImage to true.
     *
     * This method always returns a "square thumbnail" for MICRO_KIND thumbnail.
     *
     * @param filePath the path of image file
     * @param kind could be MINI_KIND or MICRO_KIND
     * @return Bitmap, or null on failures
     *
     * @hide This method is only used by media framework and media provider internally.
     */
    CARAPI CreateImageThumbnail(
        /* [in] */ const String& filePath,
        /* [in] */ Int32 kind,
        /* [out] */ IBitmap** result);

    /**
     * Create a video thumbnail for a video. May return null if the video is
     * corrupt or the format is not supported.
     *
     * @param filePath the path of video file
     * @param kind could be MINI_KIND or MICRO_KIND
     */
    CARAPI CreateVideoThumbnail(
        /* [in] */ const String& filePath,
        /* [in] */ Int32 kind,
        /* [out] */ IBitmap** result);

    /**
     * Creates a centered bitmap of the desired size.
     *
     * @param source original bitmap source
     * @param width targeted width
     * @param height targeted height
     */
    CARAPI ExtractThumbnail(
        /* [in] */ IBitmap* source,
        /* [in] */ Int32 width,
        /* [in] */ Int32 height,
        /* [out] */ IBitmap** result);

    /**
     * Creates a centered bitmap of the desired size.
     *
     * @param source original bitmap source
     * @param width targeted width
     * @param height targeted height
     * @param options options used during thumbnail extraction
     */
    CARAPI ExtractThumbnail(
        /* [in] */ IBitmap* source,
        /* [in] */ Int32 width,
        /* [in] */ Int32 height,
        /* [in] */ Int32 options,
        /* [out] */ IBitmap** result);
};

} // namespace Media
} // namepsace Droid
} // namespace Elastos

#endif // __ELASTOS_DROID_MEDIA_CTHUMBNAILUTILS_H__
