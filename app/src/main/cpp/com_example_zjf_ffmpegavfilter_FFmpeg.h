/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_example_zjf_ffmpegavfilter_FFmpeg */

#ifndef _Included_com_example_zjf_ffmpegavfilter_FFmpeg
#define _Included_com_example_zjf_ffmpegavfilter_FFmpeg
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_example_zjf_ffmpegavfilter_FFmpeg
 * Method:    filter
 * Signature: (Ljava/lang/String;Ljava/lang/Object;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_example_zjf_ffmpegavfilter_FFmpeg_filter
  (JNIEnv *, jobject, jstring, jobject, jstring);

/*
 * Class:     com_example_zjf_ffmpegavfilter_FFmpeg
 * Method:    play
 * Signature: (Ljava/lang/String;Ljava/lang/Object;)I
 */
JNIEXPORT jint JNICALL Java_com_example_zjf_ffmpegavfilter_FFmpeg_play
  (JNIEnv *, jobject, jstring, jobject);

/*
 * Class:     com_example_zjf_ffmpegavfilter_FFmpeg
 * Method:    setPlayRate
 * Signature: (F)I
 */
JNIEXPORT jint JNICALL Java_com_example_zjf_ffmpegavfilter_FFmpeg_setPlayRate
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_example_zjf_ffmpegavfilter_FFmpeg
 * Method:    again
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_example_zjf_ffmpegavfilter_FFmpeg_again
  (JNIEnv *, jobject);

/*
 * Class:     com_example_zjf_ffmpegavfilter_FFmpeg
 * Method:    release
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_example_zjf_ffmpegavfilter_FFmpeg_release
  (JNIEnv *, jobject);

/*
 * Class:     com_example_zjf_ffmpegavfilter_FFmpeg
 * Method:    playAudio
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_example_zjf_ffmpegavfilter_FFmpeg_playAudio
  (JNIEnv *, jobject, jboolean);

#ifdef __cplusplus
}
#endif
#endif