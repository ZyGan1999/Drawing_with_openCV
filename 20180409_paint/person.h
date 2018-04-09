#pragma once
#include<opencv2\core.hpp>
#include<opencv2\opencv.hpp>
#include<opencv2\highgui.hpp>

using namespace std;
using namespace cv;

class person {
public:
	person();
	void draw(Mat bac);

private:
	Point HeadCenter;
	const int headsize = 50;
	Rect body;
	Rect LeftLeg;
	Rect RightLeg;
	/*左臂四个点*/
	Point LT1;
	Point LB1;
	Point RT1;
	Point RB1;
	/*右臂四个点*/
	Point LT2;
	Point LB2;
	Point RT2;
	Point RB2;
};

