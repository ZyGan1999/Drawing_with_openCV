#include"person.h"
#include"house.h"

int main()
{
	Mat background(1000, 1000, CV_8U);
	person p;
	house h;
	p.draw(background);
	h.draw(background);
	imshow("test", background);

	waitKey(0);
	return 0;
}