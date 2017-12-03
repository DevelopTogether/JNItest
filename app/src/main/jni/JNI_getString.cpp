//
// Created by Administrator on 2017/12/3.
//

#include <stdio.h>
#include <jni.h>
#include <stdlib.h>
#include <com_example_administrator_jnitest_JNIutils.h>
 //com_example_administrator_jnitest_JNIutils 一点要与刚才生成的.h文件名一致
JNIEXPORT jstring JNICALL Java_com_example_administrator_jnitest_JNIutils_getString(JNIEnv * env, jclass jclass){
    return env -> NewStringUTF(" JNI TEST");
}
//JNIEXPORT      在Jni编程中所有本地语言实现Jni接口的方法前面都有一个"JNIEXPORT",这个可以看做是Jni的一个标志，至今为止没发现它有什么特殊的用处。
//jstring        这个学过编程的人都知道，当然是方法的返回值了。
//JNICALL        这个可以理解为Jni 和Call两个部分，和起来的意思就是 Jni调用XXX（后面的XXX就是JAVA的方法名）
//Java_com_mj_jnitest_JNIUtils_getString    这个就是被上一步中被调用的部分，也就是Java中的native 方法名，这里起名字的方式比较特别，是：包名+类名+方法名。
//JNIEnv * env： 这个env可以看做是Jni接口本身的一个对象，在上一篇中提到的jni.h头文件中存在着大量被封装好的函数，这些函数也是Jni编程中经常被使用到的，要想调用这些函数就需要使用JNIEnv这个对象。例如：env->GetObjectClass()。
//jclass jclass    与jobject类似  都可以看做java类的本身
//NewStringUTF(" THIS   JNI")    返回getString()函数的返回值
//