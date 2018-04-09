#include"person.h"
#include"house.h"

int main()
{
	Mat background(1000, 1000, CV_8U);
	person p;
	p.draw(background);
	imshow("test", background);

	waitKey(0);
	return 0;
}