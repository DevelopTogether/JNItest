package com.example.administrator.jnitest;

/**
 * Created by ${王sir} on 2017/12/3.
 * application
 */

public class JNIutils {


    /**
     * @author liuguodong
     * 编写本地java层调用方法
     * @Time 2017/12/1 14:38
     */
    public static native String getString();

    /**
     * @author liuguodong
     * 加载本地文件so文件
     * @Time 2017/12/1 14:40
     * @ JNI_HELLO_EVERYBODY这个是Module build.gradle中配置的 moduleName
     */
    static  {
        System.loadLibrary("JNI_HELLO_EVERYBODY");
    }
}
