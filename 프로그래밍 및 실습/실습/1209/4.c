#include <stdio.h>

struct point {
	int x;
	int y;
};
int main(void)
{
	struct point p1 = { 10, 20 };
	struct point p2 = { 30, 40 };
	p2 = p1;
	/*
	if (p1 == p2)
		printf("p1와 p2이 같습니다.");  // 잘못된 비교
		*/
	if ((p1.x == p2.x) && (p1.y == p2.y)) // 올바른 비교
		printf("p1와 p2이 같습니다.");
	return 0;
}
