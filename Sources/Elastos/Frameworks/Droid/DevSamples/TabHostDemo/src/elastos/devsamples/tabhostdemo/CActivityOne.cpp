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

#include "CActivityOne.h"
#include "R.h"
#include <Elastos.Droid.App.h>
#include <Elastos.Droid.Content.h>
#include <Elastos.Droid.Os.h>
#include <Elastos.Droid.View.h>
#include <elastos/core/CoreUtils.h>
#include <elastos/utility/logging/Logger.h>
// #include <elastos/droid/utility/MemoryDumper.h>

using Elastos::Droid::App::IIActivityManager;
using Elastos::Droid::Content::IContext;
using Elastos::Droid::Content::IIntent;
using Elastos::Droid::Content::CIntent;
using Elastos::Droid::Os::IServiceManager;
using Elastos::Droid::Os::CServiceManager;
using Elastos::Droid::Widget::EIID_ITabHostOnTabChangeListener;
using Elastos::Droid::Widget::IImageView;
using Elastos::Droid::Widget::ITabHost;
using Elastos::Droid::Widget::ITabSpec;
// using Elastos::Droid::Utility::MemoryDumper;
using Elastos::Core::CoreUtils;
using Elastos::Utility::Logging::Logger;

namespace Elastos {
namespace DevSamples {
namespace TabHostDemo {

static const String TAG("TabHostDemo::CActivityOne");

//=======================================================================
// MyListener
//=======================================================================

CAR_INTERFACE_IMPL(CActivityOne::MyListener, Object, ITabHostOnTabChangeListener)

CActivityOne::MyListener::MyListener(
    /* [in] */ CActivityOne* host)
    : mHost(host)
{
}

ECode CActivityOne::MyListener::OnTabChanged(
    /* [in] */ const String& tabId)
{
    Logger::I(TAG, "MyListener::OnTabChanged %s", tabId.string());
    // MemoryDumper::Dump();
    return NOERROR;
}

//=======================================================================
// CActivityOne
//=======================================================================

CAR_OBJECT_IMPL(CActivityOne)

ECode CActivityOne::constructor()
{
    Logger::I(TAG, " >> constructor()");
    return TabActivity::constructor();
}

ECode CActivityOne::OnCreate(
    /* [in] */ IBundle* savedInstanceState)
{
    Logger::I(TAG, " >> OnCreate()");
    TabActivity::OnCreate(savedInstanceState);
    SetContentView(R::layout::tabhost);

    AutoPtr<ITabHost> tabHost;
    GetTabHost((ITabHost**)&tabHost);

    AutoPtr<ITabSpec> page1;
    tabHost->NewTabSpec(String("tab1"), (ITabSpec**)&page1);
    page1->SetIndicator(CoreUtils::Convert("叶子"));
    page1->SetContent(R::id::leaf);
    tabHost->AddTab(page1);

    AutoPtr<ITabSpec> page2;
    tabHost->NewTabSpec(String("tab2"), (ITabSpec**)&page2);
    page2->SetIndicator(CoreUtils::Convert("彩叶"));
    page2->SetContent(R::id::colorleaf);
    tabHost->AddTab(page2);

    AutoPtr<ITabSpec> page3;
    tabHost->NewTabSpec(String("tab3"), (ITabSpec**)&page3);
    page3->SetIndicator(CoreUtils::Convert("碟子"));
    page3->SetContent(R::id::cupple);
    tabHost->AddTab(page3);

    AutoPtr<ITabHostOnTabChangeListener> listener = new MyListener(this);
    tabHost->SetOnTabChangedListener(listener);
    return NOERROR;
}

ECode CActivityOne::OnStart()
{
    Logger::I(TAG, " >> OnStart()");
    return TabActivity::OnStart();
}

ECode CActivityOne::OnResume()
{
    Logger::I(TAG, " >> OnResume()");
    return TabActivity::OnResume();
}

ECode CActivityOne::OnPause()
{
    Logger::I(TAG, " >> OnPause()");
    return TabActivity::OnPause();
}

ECode CActivityOne::OnStop()
{
    Logger::I(TAG, " >> OnStop()");
    return TabActivity::OnStop();
}

ECode CActivityOne::OnDestroy()
{
    Logger::I(TAG, " >> OnDestroy()");
    return TabActivity::OnDestroy();
}

ECode CActivityOne::OnActivityResult(
    /* [in] */ Int32 requestCode,
    /* [in] */ Int32 resultCode,
    /* [in] */ IIntent *data)
{
    Logger::I(TAG, " >> OnActivityResult()");
    return TabActivity::OnActivityResult(requestCode, resultCode, data);
}

} // namespace TabHostDemo
} // namespace DevSamples
} // namespace Elastos
