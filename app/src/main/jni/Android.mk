LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := JNI_HELLO_EVERYBODY
LOCAL_SRC_FILES =: JNI_getString.cpp
include $(BUILD_SHARED_LIBRARY)