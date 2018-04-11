#include"house.h"

house::house() {
	room.x = 600; room.y = 550;
	room.height = RoomLength;
	room.width = RoomLength;

	A.x = room.x + room.width / 2;
	A.y = room.y - RoomLength / 2;

	B.x = room.x - room.width / 3;
	B.y = room.y;

	C.x = room.x + room.width + room.width / 3;
	C.y = room.y;

	window.x = room.x + room.width / 3;
	window.y = room.y + room.width / 4;
	window.width = room.width / 3;
	window.height = room.height / 3;
}

void house::draw(Mat bac) {
	rectangle(bac, room, Scalar(0, 215, 255), -1, 8, 0);//ª≠∑øº‰
	/*ª≠Œ›∂•*/
	Point points[1][20];
	points[0][0] = A;
	points[0][1] = B;
	points[0][2] = C;

	const Point* pt[1] = { points[0] };
	int npt[1] = { 3 };
	polylines(bac, pt, npt, 1, 1, Scalar(63,133,205));
	fillPoly(bac, pt, npt, 1, Scalar(63,133,205), 8);

	/*ª≠¥∞¿‚*/
	rectangle(bac, window, Scalar(255, 255, 0), -1, 8, 0);//ª≠¥∞ªß
	line(bac, Point(window.x, window.y + window.height / 2), Point(window.x + window.width, window.y + window.height / 2),
		Scalar(0, 0, 0), 3, 8, 0);
	line(bac, Point(window.x + window.width / 2, window.y), Point(window.x + window.width / 2, window.y + window.height),
		Scalar(0, 0, 0), 3, 8, 0);
}