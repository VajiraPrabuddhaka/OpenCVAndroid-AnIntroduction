#include <jni.h>
#include <string>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/features2d/features2d.hpp>



extern "C"
JNIEXPORT void JNICALL Java_com_example_sriraghu95_opencvandroid_1anintroduction_EdgeDetection_detectEdges(
        JNIEnv*, jobject /* this */,
        jlong gray) {
    cv::Mat& edges = *(cv::Mat *) gray;
    cv::Canny(edges, edges, 50, 250);
}
