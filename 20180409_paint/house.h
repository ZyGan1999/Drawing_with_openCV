#pragma once
#include<opencv2\core.hpp>
#include<opencv2\opencv.hpp>
#include<opencv2\highgui.hpp>

using namespace std;
using namespace cv;

class house {
public:
	house();
	void draw(Mat bac);
private:
	const int RoomLength = 150;
	Rect room;
	Point A; Point B; Point C;//三角形屋顶的三个顶点
};