package cn.kkmofang.duktape;

/**
 * Created by zhanghailong on 2017/12/5.
 */

public class Context {

    static {
        System.loadLibrary("duktape");
    }



    private static native long alloc();
    private static native void dealloc(long ptr);
    private static native void pushobject(long ptr,Object object);
    private static native void pushfunction(long ptr,Function func);
    private static native void pushstring(long ptr,String value);
    private static native void pushnumber(long ptr,double value);
    private static native void pushinteger(long ptr,int value);
    private static native void pushboolean(long ptr,boolean value);
    private static native int gettype(long ptr);
    private static native int gettop(long ptr);
    private static native Object toobject(long ptr,int idx);
    private static native String tostring(long ptr,int idx);
    private static native double tonumber(long ptr,int idx);
    private static native int tointeger(long ptr,int idx);
    private static native boolean toboolean(long ptr,int idx);
    private static native void pop(long ptr,int n);
}
