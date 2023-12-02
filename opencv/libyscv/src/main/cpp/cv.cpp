#include <jni.h>
#include <string>

#include "opencv2/objdetect/objdetect.hpp"
#include "opencv2/features2d/features2d.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/calib3d/calib3d.hpp"
#include "opencv2/nonfree/nonfree.hpp"
#include "opencv2/imgproc/imgproc_c.h"
#include "opencv2/legacy/legacy.hpp"
#include "opencv2/legacy/compat.hpp"

extern "C" JNIEXPORT jstring JNICALL
Java_org_yeshen_android_cv_YeshenCv_init(
        JNIEnv* env,
        jobject /* this */) {

    cv::initModule_nonfree();

    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}