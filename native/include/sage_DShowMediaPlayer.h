/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class sage_DShowMediaPlayer */

#ifndef _Included_sage_DShowMediaPlayer
#define _Included_sage_DShowMediaPlayer
#ifdef __cplusplus
extern "C" {
#endif
#undef sage_DShowMediaPlayer_OVERLAY_IS_DEFAULT
#define sage_DShowMediaPlayer_OVERLAY_IS_DEFAULT 1L
/*
 * Class:     sage_DShowMediaPlayer
 * Method:    frameStep0
 * Signature: (JI)Z
 */
JNIEXPORT jboolean JNICALL Java_sage_DShowMediaPlayer_frameStep0
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     sage_DShowMediaPlayer
 * Method:    teardownGraph0
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_sage_DShowMediaPlayer_teardownGraph0
  (JNIEnv *, jobject, jlong);

/*
 * Class:     sage_DShowMediaPlayer
 * Method:    getDurationMillis0
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_sage_DShowMediaPlayer_getDurationMillis0
  (JNIEnv *, jobject, jlong);

/*
 * Class:     sage_DShowMediaPlayer
 * Method:    getMediaTimeMillis0
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_sage_DShowMediaPlayer_getMediaTimeMillis0
  (JNIEnv *, jobject, jlong);

/*
 * Class:     sage_DShowMediaPlayer
 * Method:    getGraphVolume0
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_sage_DShowMediaPlayer_getGraphVolume0
  (JNIEnv *, jobject, jlong);

/*
 * Class:     sage_DShowMediaPlayer
 * Method:    pause0
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_sage_DShowMediaPlayer_pause0
  (JNIEnv *, jobject, jlong);

/*
 * Class:     sage_DShowMediaPlayer
 * Method:    play0
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_sage_DShowMediaPlayer_play0
  (JNIEnv *, jobject, jlong);

/*
 * Class:     sage_DShowMediaPlayer
 * Method:    seek0
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_sage_DShowMediaPlayer_seek0
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     sage_DShowMediaPlayer
 * Method:    stop0
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_sage_DShowMediaPlayer_stop0
  (JNIEnv *, jobject, jlong);

/*
 * Class:     sage_DShowMediaPlayer
 * Method:    setPlaybackRate0
 * Signature: (JF)V
 */
JNIEXPORT void JNICALL Java_sage_DShowMediaPlayer_setPlaybackRate0
  (JNIEnv *, jobject, jlong, jfloat);

/*
 * Class:     sage_DShowMediaPlayer
 * Method:    getPlaybackRate0
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_sage_DShowMediaPlayer_getPlaybackRate0
  (JNIEnv *, jobject, jlong);

/*
 * Class:     sage_DShowMediaPlayer
 * Method:    setGraphVolume0
 * Signature: (JF)F
 */
JNIEXPORT jfloat JNICALL Java_sage_DShowMediaPlayer_setGraphVolume0
  (JNIEnv *, jobject, jlong, jfloat);

/*
 * Class:     sage_DShowMediaPlayer
 * Method:    createGraph0
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_sage_DShowMediaPlayer_createGraph0
  (JNIEnv *, jobject);

/*
 * Class:     sage_DShowMediaPlayer
 * Method:    setupGraph0
 * Signature: (JLjava/lang/String;Ljava/lang/String;ZZ)V
 */
JNIEXPORT void JNICALL Java_sage_DShowMediaPlayer_setupGraph0
  (JNIEnv *, jobject, jlong, jstring, jstring, jboolean, jboolean);

/*
 * Class:     sage_DShowMediaPlayer
 * Method:    setVideoDecoderFilter0
 * Signature: (JLjava/lang/String;Ljava/util/Map;)V
 */
JNIEXPORT void JNICALL Java_sage_DShowMediaPlayer_setVideoDecoderFilter0
  (JNIEnv *, jobject, jlong, jstring, jobject);

/*
 * Class:     sage_DShowMediaPlayer
 * Method:    setVideoPostProcessingFilter0
 * Signature: (JLjava/lang/String;Ljava/util/Map;)V
 */
JNIEXPORT void JNICALL Java_sage_DShowMediaPlayer_setVideoPostProcessingFilter0
  (JNIEnv *, jobject, jlong, jstring, jobject);

/*
 * Class:     sage_DShowMediaPlayer
 * Method:    setVideoRendererFilter0
 * Signature: (JLjava/lang/String;Ljava/util/Map;)V
 */
JNIEXPORT void JNICALL Java_sage_DShowMediaPlayer_setVideoRendererFilter0
  (JNIEnv *, jobject, jlong, jstring, jobject);

/*
 * Class:     sage_DShowMediaPlayer
 * Method:    setAudioDecoderFilter0
 * Signature: (JLjava/lang/String;Ljava/util/Map;)V
 */
JNIEXPORT void JNICALL Java_sage_DShowMediaPlayer_setAudioDecoderFilter0
  (JNIEnv *, jobject, jlong, jstring, jobject);

/*
 * Class:     sage_DShowMediaPlayer
 * Method:    setAudioPostProcessingFilter0
 * Signature: (JLjava/lang/String;Ljava/util/Map;)V
 */
JNIEXPORT void JNICALL Java_sage_DShowMediaPlayer_setAudioPostProcessingFilter0
  (JNIEnv *, jobject, jlong, jstring, jobject);

/*
 * Class:     sage_DShowMediaPlayer
 * Method:    setAudioRendererFilter0
 * Signature: (JLjava/lang/String;Ljava/util/Map;)V
 */
JNIEXPORT void JNICALL Java_sage_DShowMediaPlayer_setAudioRendererFilter0
  (JNIEnv *, jobject, jlong, jstring, jobject);

/*
 * Class:     sage_DShowMediaPlayer
 * Method:    setNotificationWindow0
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_sage_DShowMediaPlayer_setNotificationWindow0
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     sage_DShowMediaPlayer
 * Method:    setVideoHWND0
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_sage_DShowMediaPlayer_setVideoHWND0
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     sage_DShowMediaPlayer
 * Method:    setTimeshifting0
 * Signature: (JZJ)V
 */
JNIEXPORT void JNICALL Java_sage_DShowMediaPlayer_setTimeshifting0
  (JNIEnv *, jobject, jlong, jboolean, jlong);

/*
 * Class:     sage_DShowMediaPlayer
 * Method:    getColorKey0
 * Signature: (J)Ljava/awt/Color;
 */
JNIEXPORT jobject JNICALL Java_sage_DShowMediaPlayer_getColorKey0
  (JNIEnv *, jobject, jlong);

/*
 * Class:     sage_DShowMediaPlayer
 * Method:    getVideoDimensions0
 * Signature: (J)Ljava/awt/Dimension;
 */
JNIEXPORT jobject JNICALL Java_sage_DShowMediaPlayer_getVideoDimensions0
  (JNIEnv *, jobject, jlong);

/*
 * Class:     sage_DShowMediaPlayer
 * Method:    resizeVideo0
 * Signature: (JLjava/awt/Rectangle;Ljava/awt/Rectangle;Z)V
 */
JNIEXPORT void JNICALL Java_sage_DShowMediaPlayer_resizeVideo0
  (JNIEnv *, jobject, jlong, jobject, jobject, jboolean);

/*
 * Class:     sage_DShowMediaPlayer
 * Method:    setCCState0
 * Signature: (JI)Z
 */
JNIEXPORT jboolean JNICALL Java_sage_DShowMediaPlayer_setCCState0
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     sage_DShowMediaPlayer
 * Method:    getCCState0
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_sage_DShowMediaPlayer_getCCState0
  (JNIEnv *, jobject, jlong);

/*
 * Class:     sage_DShowMediaPlayer
 * Method:    processEvents0
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_sage_DShowMediaPlayer_processEvents0
  (JNIEnv *, jobject, jlong);

/*
 * Class:     sage_DShowMediaPlayer
 * Method:    demuxPlaybackControl0
 * Signature: (JIJJ)Z
 */
JNIEXPORT jboolean JNICALL Java_sage_DShowMediaPlayer_demuxPlaybackControl0
  (JNIEnv *, jobject, jlong, jint, jlong, jlong);

/*
 * Class:     sage_DShowMediaPlayer
 * Method:    inactiveFile0
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_sage_DShowMediaPlayer_inactiveFile0
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif