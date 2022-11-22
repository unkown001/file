#include <jni.h>        // JNI header provided by JDK
#include <stdio.h>      // C Standard IO Header
#include "Hello.h"   // Generated
 
// Implementation of the native method sayHello()
JNIEXPORT void JNICALL Java_Hello_sayHello(JNIEnv *env, jobject thisObj) {
   printf("Hello World!\n");
   return;
}
