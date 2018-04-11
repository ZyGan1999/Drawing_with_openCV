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
}

void house::draw(Mat bac) {
	rectangle(bac, room, Scalar(255, 255, 255), -1, 8, 0);//»­·¿¼ä
	Point points[1][20];
	points[0][0] = A;
	points[0][1] = B;
	points[0][2] = C;

	const Point* pt[1] = { points[0] };
	int npt[1] = { 3 };
	polylines(bac, pt, npt, 1, 1, Scalar(255, 255, 255));
	fillPoly(bac, pt, npt, 1, Scalar(255, 255, 255), 8);
}