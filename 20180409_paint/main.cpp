#include"person.h"
#include"house.h"

int main()
{
	Mat background(800, 1000, CV_8UC3);
	person p;
	house h;
	p.draw(background);
	h.draw(background);
	imshow("test", background);

	waitKey(0);
	return 0;
}