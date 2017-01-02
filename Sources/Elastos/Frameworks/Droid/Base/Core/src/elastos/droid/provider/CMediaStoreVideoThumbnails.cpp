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

#include "elastos/droid/ext/frameworkext.h"
#include "elastos/droid/net/CUriHelper.h"
#include "elastos/droid/provider/CMediaStoreInternalThumbnails.h"
#include "elastos/droid/provider/CMediaStoreVideoThumbnails.h"
#include <elastos/core/StringBuilder.h>

using Elastos::Droid::Net::CUriHelper;
using Elastos::Droid::Net::IUriHelper;
using Elastos::Core::StringBuilder;

namespace Elastos {
namespace Droid {
namespace Provider {

CAR_SINGLETON_IMPL(CMediaStoreVideoThumbnails)

CAR_INTERFACE_IMPL(CMediaStoreVideoThumbnails, Singleton, IMediaStoreVideoThumbnails)

ECode CMediaStoreVideoThumbnails::GetINTERNAL_CONTENT_URI(
    /* [out] */ IUri** uri)
{
    VALIDATE_NOT_NULL(uri);
    return GetContentUri(String("internal"), uri);
}

ECode CMediaStoreVideoThumbnails::GetEXTERNAL_CONTENT_URI(
    /* [out] */ IUri** uri)
{
    VALIDATE_NOT_NULL(uri);
    return GetContentUri(String("external"), uri);
}

ECode CMediaStoreVideoThumbnails::CancelThumbnailRequest(
    /* [in] */ IContentResolver* cr,
    /* [in] */ Int64 origId)
{
    AutoPtr<IUri> uri;
    GetEXTERNAL_CONTENT_URI((IUri**)&uri);

    AutoPtr<IMediaStoreInternalThumbnails> thumbnails;
    CMediaStoreInternalThumbnails::AcquireSingleton((IMediaStoreInternalThumbnails**)&thumbnails);
    return thumbnails->CancelThumbnailRequest(cr, origId,
            uri, IMediaStoreInternalThumbnails::DEFAULT_GROUP_ID);
}

ECode CMediaStoreVideoThumbnails::GetThumbnail(
    /* [in] */ IContentResolver* cr,
    /* [in] */ Int64 origId,
    /* [in] */ Int32 kind,
    /* [in] */ IBitmapFactoryOptions* options,
    /* [out] */ IBitmap** bitmap)
{
    AutoPtr<IUri> uri;
    GetEXTERNAL_CONTENT_URI((IUri**)&uri);

    VALIDATE_NOT_NULL(bitmap);
    AutoPtr<IMediaStoreInternalThumbnails> thumbnails;
    CMediaStoreInternalThumbnails::AcquireSingleton((IMediaStoreInternalThumbnails**)&thumbnails);
    return thumbnails->GetThumbnail(cr, origId,
            IMediaStoreInternalThumbnails::DEFAULT_GROUP_ID, kind, options,
            uri, TRUE, bitmap);
}

ECode CMediaStoreVideoThumbnails::GetThumbnail(
    /* [in] */ IContentResolver* cr,
    /* [in] */ Int64 origId,
    /* [in] */ Int64 groupId,
    /* [in] */ Int32 kind,
    /* [in] */ IBitmapFactoryOptions* options,
    /* [out] */ IBitmap** bitmap)
{
    AutoPtr<IUri> uri;
    GetEXTERNAL_CONTENT_URI((IUri**)&uri);

    VALIDATE_NOT_NULL(bitmap);
    AutoPtr<IMediaStoreInternalThumbnails> thumbnails;
    CMediaStoreInternalThumbnails::AcquireSingleton((IMediaStoreInternalThumbnails**)&thumbnails);
    return thumbnails->GetThumbnail(cr, origId, groupId, kind, options,
            uri, TRUE, bitmap);
}

ECode CMediaStoreVideoThumbnails::CancelThumbnailRequest(
    /* [in] */ IContentResolver* cr,
    /* [in] */ Int64 origId,
    /* [in] */ Int64 groupId)
{
    AutoPtr<IUri> uri;
    GetEXTERNAL_CONTENT_URI((IUri**)&uri);

    AutoPtr<IMediaStoreInternalThumbnails> thumbnails;
    CMediaStoreInternalThumbnails::AcquireSingleton((IMediaStoreInternalThumbnails**)&thumbnails);
    return thumbnails->CancelThumbnailRequest(cr, origId,
            uri, groupId);
}

ECode CMediaStoreVideoThumbnails::GetContentUri(
    /* [in] */ const String& volumeName,
    /* [out] */ IUri** uri)
{
    VALIDATE_NOT_NULL(uri);

    AutoPtr<IUriHelper> helper;
    CUriHelper::AcquireSingleton((IUriHelper**)&helper);
    StringBuilder builder;
    builder += IMediaStore::CONTENT_AUTHORITY_SLASH;
    builder += volumeName;
    builder += "/video/thumbnails";
    String str = builder.ToString();
    return helper->Parse(str, uri);
}

} //namespace Provider
} //namespace Droid
} //namespace Elastos
