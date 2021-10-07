#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;
int main()
{
	cout << "OpenCV Version: " << CV_VERSION << endl;
	Mat img = imread("Pokemon.png");
	imshow("1440", img);
	waitKey(0);
	return 0;
}
