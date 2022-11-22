#include<jni.h>
#include<stdio.h>
#include "TestJNI.h"
JNIEXPORT jint JNICALL Java_TestJNI_add(JNIEnv *env,jobject thisobj,jint n1,jint n2)
{
	
	return(n1+n2);
	
}
JNIEXPORT jint JNICALL Java_TestJNI_sub(JNIEnv *env,jobject thisobj,jint n1,jint n2)
{
	return(n1-n2);
}
JNIEXPORT jint JNICALL Java_TestJNI_mul(JNIEnv *env,jobject thisobj,jint n1,jint n2)
{
	return(n1*n2);	
}
JNIEXPORT jint JNICALL Java_TestJNI_division(JNIEnv *env,jobject thisobj,jint n1,jint n2)
{
	return(n1/n2);
}
