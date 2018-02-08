LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_CFLAGS := -Werror -Wunused-parameter

LOCAL_SHARED_LIBRARIES +=  libcutils libc  liblog
LOCAL_MODULE    := libpcm_wfd
LOCAL_SRC_FILES := lpcm_decode.c
#$(notdir $(wildcard $(LOCAL_PATH)/*.c))
LOCAL_ARM_MODE := arm

ifeq ($(shell test $(PLATFORM_SDK_VERSION) -ge 26 && echo OK),OK)
LOCAL_PROPRIETARY_MODULE := true
endif

LOCAL_MODULE_TAGS := optional
LOCAL_C_INCLUDES := $(LOCAL_PATH)  $(LOCAL_PATH)/../../amadec/include $(LOCAL_PATH)/../../amadec/

include $(BUILD_SHARED_LIBRARY)
