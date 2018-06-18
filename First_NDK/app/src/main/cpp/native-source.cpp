//
// Created by XxxYH on 2018/6/18.
//
#include <jni.h>
#include <string>

extern "C"

JNIEXPORT jstring
JNICALL
Java_com_iqiyi_xxxyh_first_1ndk_GetClassName_mailFromJNI(JNIEnv *env,jobject ){
    std::string name = "xuyunhua@qiyi.com";
    return env->NewStringUTF(name.c_str());
}

