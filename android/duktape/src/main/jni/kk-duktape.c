
#include <jni.h>
#include "kk.h"
#include "duktape.h"
#include "cn_kkmofang_duktape_Context.h"

static void Context_fatal_function (void *udata, const char *msg) {
    kk_log("%s",msg);
}


JNIEXPORT jlong JNICALL Java_cn_kkmofang_duktape_Context_alloc(JNIEnv * env, jclass isa) {

    duk_context * v = duk_create_heap(NULL, NULL, NULL, NULL, Context_fatal_function);

    return (jlong) (long) v;
}

JNIEXPORT void JNICALL Java_cn_kkmofang_duktape_Context_dealloc(JNIEnv * env, jclass isa, jlong ptr) {
    duk_context * ctx = (duk_context *) (long) ptr;
    duk_destroy_heap(ctx);
}

JNIEXPORT void JNICALL Java_cn_kkmofang_duktape_Context_pushobject(JNIEnv * env, jclass isa, jlong ptr, jobject object) {

    duk_context * ctx = (duk_context *) (long) ptr;


}
