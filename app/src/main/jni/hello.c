#include <string.h>
#include <jni.h>

jstring
Java_com_android_ndkhellosample_MainActivity_stringFromJNI( JNIEnv* env, jobject thiz ) {
#ifdef CUSTOM_DEFINE
    return (*env)->NewStringUTF(env, "Hello JNI !!!");
#else
    return (*env)->NewStringUTF(env, "else side");
#endif
}