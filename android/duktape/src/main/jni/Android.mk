LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

KK_SRC_FILES := kk.c kk-duktape.c

DUKTAPE_SRC := duktape/src

LOCAL_MODULE := duktape

LOCAL_C_INCLUDES := $(LOCAL_PATH)/$(DUKTAPE_SRC)

LOCAL_SRC_FILES := $(DUKTAPE_SRC)/duktape.c \
$(KK_SRC_FILES)

LOCAL_CFLAGS := -O3 -ldl -std=gnu99 -Wall -Wextra -Wunused-parameter $(SYSCFLAGS) $(MYCFLAGS)

LOCAL_LDLIBS := -lm -llog

include $(BUILD_SHARED_LIBRARY)