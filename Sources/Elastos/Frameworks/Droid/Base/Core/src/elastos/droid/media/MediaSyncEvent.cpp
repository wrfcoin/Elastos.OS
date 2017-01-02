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
#include "elastos/droid/media/MediaSyncEvent.h"
#include "elastos/droid/media/CMediaSyncEvent.h"
#include <elastos/utility/logging/Slogger.h>

using Elastos::Utility::Logging::Slogger;

namespace Elastos {
namespace Droid {
namespace Media {

MediaSyncEvent::MediaSyncEvent()
    : mType(0)
    , mAudioSession(0)
{}

MediaSyncEvent::~MediaSyncEvent()
{}

CAR_INTERFACE_IMPL(MediaSyncEvent, Object, IMediaSyncEvent)

ECode MediaSyncEvent::constructor(
    /* [in] */ Int32 eventType)
{
    mType = eventType;
    return NOERROR;
}

ECode MediaSyncEvent::CreateEvent(
    /* [in] */ Int32 eventType,
    /* [out] */ IMediaSyncEvent** result)
{
    VALIDATE_NOT_NULL(result);
    *result = NULL;

    if (!IsValidType(eventType)) {
        Slogger::E("MediaSyncEvent", "%d is not a valid MediaSyncEvent type.", eventType);
        return E_ILLEGAL_ARGUMENT_EXCEPTION;
    }

    return CMediaSyncEvent::New(eventType, result);
}

ECode MediaSyncEvent::SetAudioSessionId(
    /* [in] */ Int32 audioSessionId)
{
    if (audioSessionId > 0) {
        mAudioSession = audioSessionId;
    }
    else {
        Slogger::E("MediaSyncEvent", "%d is not a valid session ID.", audioSessionId);
        return E_ILLEGAL_ARGUMENT_EXCEPTION;
    }
    return NOERROR;
}

ECode MediaSyncEvent::GetType(
    /* [out] */ Int32* result)
{
    VALIDATE_NOT_NULL(result);
    *result = mType;
    return NOERROR;
}

ECode MediaSyncEvent::GetAudioSessionId(
    /* [out] */ Int32* result)
{
    VALIDATE_NOT_NULL(result);
    *result = mAudioSession;
    return NOERROR;
}

Boolean MediaSyncEvent::IsValidType(
    /* [in] */ Int32 type)
{
    switch (type) {
    case SYNC_EVENT_NONE:
    case SYNC_EVENT_PRESENTATION_COMPLETE:
        return TRUE;
    default:
        return FALSE;
    }
}

} // namespace Media
} // namepsace Droid
} // namespace Elastos