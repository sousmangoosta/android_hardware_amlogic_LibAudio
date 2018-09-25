LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_SHARED_LIBRARIES += libutils libz libbinder libdl libcutils libc liblog
LOCAL_MODULE    := libpcm
LOCAL_SRC_FILES := $(notdir $(wildcard $(LOCAL_PATH)/*.c))
LOCAL_ARM_MODE := arm

LOCAL_C_INCLUDES:= \
    $(LOCAL_PATH)/include \
    $(AMAVUTILS_INCLUDE) \
    frameworks/av/include \
    system/media/audio/include \
    system/libhidl/transport/token/1.0/utils/include

ifeq ($(shell test $(PLATFORM_SDK_VERSION) -ge 26 && echo OK),OK)
LOCAL_PROPRIETARY_MODULE := true
endif

LOCAL_MODULE_TAGS := optional
include $(LOCAL_PATH)/../config.mk
include $(BUILD_SHARED_LIBRARY)
