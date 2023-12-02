package org.yeshen.android.cv;

public class YeshenCv {

    static {
        System.loadLibrary("yscv");
    }

    public native String init();
}