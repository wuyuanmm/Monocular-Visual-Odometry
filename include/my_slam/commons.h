
#ifndef COMMONS_H
#define COMMONS_H

#include "my_slam/common_include.h"
#include "my_slam/frame.h"

namespace my_slam
{
using namespace std; 
using namespace cv;

Mat getMotionFromFrame1to2(const Frame::Ptr f1, const Frame::Ptr f2);
void getMotionFromFrame1to2(const Frame::Ptr f1, const Frame::Ptr f2, Mat &R, Mat &t);

}

#endif