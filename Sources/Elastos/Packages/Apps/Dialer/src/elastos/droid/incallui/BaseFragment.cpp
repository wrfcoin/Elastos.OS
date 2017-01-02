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

#include "elastos/droid/incallui/BaseFragment.h"

namespace Elastos {
namespace Droid {
namespace InCallUI {

ECode BaseFragment::constructor()
{
    Fragment::constructor();
    mPresenter = CreatePresenter();
    return NOERROR;
}

AutoPtr<IPresenter> BaseFragment::GetPresenter()
{
    return mPresenter;
}

ECode BaseFragment::OnActivityCreated(
    /* [in] */ IBundle* savedInstanceState)
{
    FAIL_RETURN(Fragment::OnActivityCreated(savedInstanceState));
    AutoPtr<IUi> ui = GetUi();
    mPresenter->OnUiReady(ui);
    return NOERROR;
}

ECode BaseFragment::OnDestroyView()
{
    FAIL_RETURN(Fragment::OnDestroyView());
    AutoPtr<IUi> ui = GetUi();
    mPresenter->OnUiDestroy(ui);
    return NOERROR;
}

} // namespace InCallUI
} // namespace Droid
} // namespace Elastos
