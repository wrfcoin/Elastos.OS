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

#include "Elastos.Droid.Content.h"
#include "Elastos.Droid.Utility.h"
#include "elastos/droid/webkit/webview/chromium/ResourceRewriter.h"
#include "elastos/droid/webkit/webview/chromium/native/content/R_Content.h"
#include "elastos/droid/webkit/webview/chromium/native/ui/R_Ui.h"
#include "elastos/droid/webkit/webview/chromium/R_Chromium.h"

using Elastos::Droid::Content::Res::IAssetManager;
using Elastos::Droid::Content::Res::IResources;
using Elastos::Droid::Utility::ISparseArray;
using Elastos::Core::ICharSequence;

namespace Elastos {
namespace Droid {
namespace Webkit {
namespace Webview {
namespace Chromium {

//=====================================================================
//                           ResourceRewriter
//=====================================================================
ECode ResourceRewriter::RewriteRValues(
    /* [in] */ IContext* ctx)
{
    VALIDATE_NOT_NULL(ctx);
    // ==================before translated======================
    // // Rewrite the R 'constants' for the WebView library apk.
    // SparseArray<String> packageIdentifiers = ctx.getResources().getAssets()
    //         .getAssignedPackageIdentifiers();
    //
    // final int N = packageIdentifiers.size();
    // for (int i = 0; i < N; i++) {
    //     final String name = packageIdentifiers.valueAt(i);
    //
    //     // The resources are always called com.android.webview even if the manifest has had the
    //     // package renamed.
    //     if ("com.android.webview".equals(name)) {
    //         final int id = packageIdentifiers.keyAt(i);
    //
    //         // TODO: We should use jarjar to remove the redundant R classes here, but due
    //         // to a bug in jarjar it's not possible to rename classes with '$' in their name.
    //         // See b/15684775.
    //         com.android.webview.chromium.R.onResourcesLoaded(id);
    //         org.chromium.ui.R.onResourcesLoaded(id);
    //         org.chromium.content.R.onResourcesLoaded(id);
    //
    //         break;
    //     }
    // }

    assert(0);
    // Rewrite the R 'constants' for the WebView library apk.
    AutoPtr<IResources> res;
    ctx->GetResources((IResources**)&res);

    AutoPtr<IAssetManager> assetManager;
    res->GetAssets((IAssetManager**)&assetManager);

    AutoPtr<ISparseArray> packageIdentifiers;
    // car has no this func: assetManager->GetAssignedPackageIdentifiers((ISparseArray**)&packageIdentifiers);

    Int32 N = 0;
    packageIdentifiers->GetSize(&N);
    String name;
    Int32 id = 0;
    for (Int32 i = 0; i < N; i++) {
        AutoPtr<IInterface> itemTmp;
        packageIdentifiers->Get(i, (IInterface**)&itemTmp);
        ICharSequence* charSequenceTmp = ICharSequence::Probe(itemTmp);
        charSequenceTmp->ToString(&name);

        // The resources are always called com.android.webview even if the manifest has had the
        // package renamed.
        if (name.Equals("com.android.webview")) {
            packageIdentifiers->KeyAt(i, &id);

            // TODO: We should use jarjar to remove the redundant R classes here, but due
            // to a bug in jarjar it's not possible to rename classes with '$' in their name.
            // See b/15684775.

            Elastos::Droid::Webkit::Webview::Chromium::R::OnResourcesLoaded(id);
            Elastos::Droid::Webkit::Webview::Chromium::Ui::R::OnResourcesLoaded(id);
            Elastos::Droid::Webkit::Webview::Chromium::Content::R::OnResourcesLoaded(id);
            break;
        }
    }
    return NOERROR;
}

} // namespace Chromium
} // namespace Webview
} // namespace Webkit
} // namespace Droid
} // namespace Elastos


