#include"person.h"

person::person() {
	/*以头半径为标准构建所有图像的坐标和参数*/
	HeadCenter.x = 200;
	HeadCenter.y = 200;

	body.x = HeadCenter.x - 2 * headsize;
	body.y = HeadCenter.y + headsize;
	body.height = 6 * headsize;
	body.width = 4 * headsize;

	LeftLeg.x = body.x;
	LeftLeg.y = body.y + body.height;
	LeftLeg.height = 3 * headsize;
	LeftLeg.width = headsize;

	RightLeg.x = body.x + 3 * headsize;
	RightLeg.y = body.y + body.height;
	RightLeg.height = 3 * headsize;
	RightLeg.width = headsize;

	RT1.x = body.x; RT1.y = body.y;
	RB1.x = RT1.x; RB1.y = RT1.y + headsize;
	LT1.x = RT1.x - headsize; LT1.y = RT1.y + 2 * headsize;
	LB1.x = LT1.x; LB1.y = LT1.y + headsize;

	LT2.x = body.x + body.width; LT2.y = body.y;
	LB2.x = LT2.x; LB2.y = LT2.y + headsize;
	RT2.x = LT2.x + headsize; RT2.y = LT2.y + 2 * headsize;
	RB2.x = RT2.x; RB2.y = RT2.y + headsize;
}

void person::draw(Mat bac) {
	circle(bac, HeadCenter, headsize, Scalar(255, 255, 255), -1, 8, 0);//画头
	rectangle(bac, body, Scalar(255, 255, 255), -1, 8, 0);//画身体
	rectangle(bac, LeftLeg, Scalar(255, 255, 255), -1, 8, 0);//画左腿
	rectangle(bac, RightLeg, Scalar(255, 255, 255), -1, 8, 0);//画右腿

	/*以下是构建折线并填充以画出平行四边形作为左右手臂*/
	Point Lpoints[1][20];
	Lpoints[0][0] = LB1;
	Lpoints[0][1] = LT1;
	Lpoints[0][2] = RT1;
	Lpoints[0][3] = RB1;

	const Point* Lpt[1] = { Lpoints[0] };
	int Lnpt[1] = { 4 };
	polylines(bac, Lpt, Lnpt, 1, 1, Scalar(250, 0, 0));
	fillPoly(bac, Lpt, Lnpt, 1, Scalar(250, 0, 0), 8);

	Point Rpoints[1][20];
	Rpoints[0][0] = LB2;
	Rpoints[0][1] = LT2;
	Rpoints[0][2] = RT2;
	Rpoints[0][3] = RB2;

	const Point* Rpt[1] = { Rpoints[0] };
	int Rnpt[1] = { 4 };
	polylines(bac, Rpt, Rnpt, 1, 1, Scalar(250, 0, 0));
	fillPoly(bac, Rpt, Rnpt, 1, Scalar(250, 0, 0), 8);
}