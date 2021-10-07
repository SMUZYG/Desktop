#include "opencv2/opencv.hpp"

using namespace cv;

int main(void){
	Mat srcImg = imread("picture.jpg");
	//imshow("srcImg", srcImg);
	printf(srcImg)
	waitKey(0);
	return 0;
}

