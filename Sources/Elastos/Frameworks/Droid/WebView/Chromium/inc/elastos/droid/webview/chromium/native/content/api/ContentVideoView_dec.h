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
//    ContentVideoView.java
//put this file at the end of the include list
//so the type definition used in this file will be found
#ifndef ELASTOS_CONTENTVIDEOVIEW_CALLBACK_DEC_HH
#define ELASTOS_CONTENTVIDEOVIEW_CALLBACK_DEC_HH


#ifdef __cplusplus
extern "C"
{
#endif
    extern AutoPtr<IInterface> Elastos_ContentVideoView_nativeGetSingletonJavaContentVideoView();
    extern void Elastos_ContentVideoView_nativeExitFullscreen(IInterface* caller,Handle64 nativeContentVideoView,Boolean relaseMediaPlayer);
    extern Int32 Elastos_ContentVideoView_nativeGetCurrentPosition(IInterface* caller,Handle64 nativeContentVideoView);
    extern Int32 Elastos_ContentVideoView_nativeGetDurationInMilliSeconds(IInterface* caller,Handle64 nativeContentVideoView);
    extern void Elastos_ContentVideoView_nativeRequestMediaMetadata(IInterface* caller,Handle64 nativeContentVideoView);
    extern Int32 Elastos_ContentVideoView_nativeGetVideoWidth(IInterface* caller,Handle64 nativeContentVideoView);
    extern Int32 Elastos_ContentVideoView_nativeGetVideoHeight(IInterface* caller,Handle64 nativeContentVideoView);
    extern Boolean Elastos_ContentVideoView_nativeIsPlaying(IInterface* caller,Handle64 nativeContentVideoView);
    extern void Elastos_ContentVideoView_nativePause(IInterface* caller,Handle64 nativeContentVideoView);
    extern void Elastos_ContentVideoView_nativePlay(IInterface* caller,Handle64 nativeContentVideoView);
    extern void Elastos_ContentVideoView_nativeSeekTo(IInterface* caller,Handle64 nativeContentVideoView,Int32 msec);
    extern void Elastos_ContentVideoView_nativeSetSurface(IInterface* caller,Handle64 nativeContentVideoView,IInterface* surface);
    extern void Elastos_ContentVideoView_InitCallback(Handle64 cb);
#ifdef __cplusplus
}
#endif


namespace Elastos {
namespace Droid {
namespace Webkit {
namespace Webview {
namespace Chromium {
namespace Content {
namespace Browser {

struct ElaContentVideoViewCallback
{
    void (*elastos_ContentVideoView_onMediaPlayerError)(IInterface* obj, Int32 errorType);
    void (*elastos_ContentVideoView_onVideoSizeChanged)(IInterface* obj, Int32 width, Int32 height);
    void (*elastos_ContentVideoView_onBufferingUpdate)(IInterface* obj, Int32 percent);
    void (*elastos_ContentVideoView_onPlaybackComplete)(IInterface* obj);
    void (*elastos_ContentVideoView_onUpdateMediaMetadata)(IInterface* obj, Int32 videoWidth, Int32 videoHeight, Int32 duration, Boolean canPause, Boolean canSeekBack, Boolean canSeekForward);
    void (*elastos_ContentVideoView_openVideo)(IInterface* obj);
    AutoPtr<IInterface> (*elastos_ContentVideoView_createContentVideoView)(IInterface* context, Handle64 nativeContentVideoView, IInterface* client, Boolean legacy);
    void (*elastos_ContentVideoView_onExitFullscreen)(IInterface* obj);
    void (*elastos_ContentVideoView_destroyContentVideoView)(IInterface* obj, Boolean nativeViewDestroyed);
    Handle64 (*elastos_ContentVideoView_getNativeViewAndroid)(IInterface* obj);
};

void* ContentVideoView::ElaContentVideoViewCallback_Init()
{
    static ElaContentVideoViewCallback sElaContentVideoViewCallback;

    sElaContentVideoViewCallback.elastos_ContentVideoView_onMediaPlayerError = &ContentVideoView::OnMediaPlayerError;
    sElaContentVideoViewCallback.elastos_ContentVideoView_onVideoSizeChanged = &ContentVideoView::OnVideoSizeChanged;
    sElaContentVideoViewCallback.elastos_ContentVideoView_onBufferingUpdate = &ContentVideoView::OnBufferingUpdate;
    sElaContentVideoViewCallback.elastos_ContentVideoView_onPlaybackComplete = &ContentVideoView::OnPlaybackComplete;
    sElaContentVideoViewCallback.elastos_ContentVideoView_onUpdateMediaMetadata = &ContentVideoView::OnUpdateMediaMetadata;
    sElaContentVideoViewCallback.elastos_ContentVideoView_openVideo = &ContentVideoView::OpenVideo;
    sElaContentVideoViewCallback.elastos_ContentVideoView_createContentVideoView = &ContentVideoView::CreateContentVideoView;
    sElaContentVideoViewCallback.elastos_ContentVideoView_onExitFullscreen = &ContentVideoView::OnExitFullscreen;
    sElaContentVideoViewCallback.elastos_ContentVideoView_destroyContentVideoView = &ContentVideoView::DestroyContentVideoView;
    sElaContentVideoViewCallback.elastos_ContentVideoView_getNativeViewAndroid = &ContentVideoView::GetNativeViewAndroid;

    Elastos_ContentVideoView_InitCallback((Handle64)&sElaContentVideoViewCallback);
    return &sElaContentVideoViewCallback;
}

static void* sPElaContentVideoViewCallback = ContentVideoView::ElaContentVideoViewCallback_Init();

} // namespace Browser
} // namespace Content
} // namespace Chromium
} // namespace Webview
} // namespace Webkit
} // namespace Droid
} // namespace Elastos

#endif //ELASTOS_CONTENTVIDEOVIEW_CALLBACK_DEC_HH
