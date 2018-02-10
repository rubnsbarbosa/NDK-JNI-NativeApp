#include <jni.h>
#include <string>
#include "CalculateArea.h"

extern "C"
JNIEXPORT jint

JNICALL Java_com_rubens_naativeapp_MainActivity_squareArea(JNIEnv* env, jobject, jint number) {
    CalculateArea CalculateArea(number);
    return CalculateArea.squareArea();
}
