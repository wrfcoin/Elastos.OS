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

#ifndef __ELASTOS_DROID_DIALER_CALLLOG_CALLLOGRECEIVER_H__
#define __ELASTOS_DROID_DIALER_CALLLOG_CALLLOGRECEIVER_H__

#include "elastos/droid/content/BroadcastReceiver.h"

using Elastos::Droid::Content::BroadcastReceiver;

namespace Elastos {
namespace Droid {
namespace Dialer {
namespace CallLog {

/**
 * Receiver for call log events.
 * <p>
 * It is currently used to handle {@link VoicemailContract#ACTION_NEW_VOICEMAIL} and
 * {@link Intent#ACTION_BOOT_COMPLETED}.
 */
class CallLogReceiver
    : public BroadcastReceiver
{
public:
    TO_STRING_IMPL("CallLogReceiver")

    // @Override
    CARAPI OnReceive(
        /* [in] */ IContext* context,
        /* [in] */ IIntent* intent);

private:
    static const String TAG; // = "CallLogReceiver";
};

} // CallLog
} // Dialer
} // Droid
} // Elastos

#endif //__ELASTOS_DROID_DIALER_CALLLOG_CALLLOGRECEIVER_H__
