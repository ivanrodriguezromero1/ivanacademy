#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_ivanacademy_education_MainActivity_stringFromJNI(
    JNIEnv* env,
    jobject /* this */) {
    std::string hello = "ivanacademy desde C++";
    return env->NewStringUTF(hello.c_str());
}
