#define CLASSES 3
#define STUDENTS 5
#include <stdio.h>
int main()
{
	int s[CLASSES][STUDENTS] = { {87,77,75,97,90},{65,85,90,70,80},{80,65,95,100,75} };
	int clas, student, total=0, subtotal=0;
	for (clas = 0; clas < CLASSES; clas++)
	{
		for (student = 0; student < STUDENTS; student++)
		{
			subtotal += s[clas][student];
		}
		printf("학급 %d의 평균 성적 = %d\n", clas + 1, subtotal / STUDENTS);
		total += subtotal;
		subtotal = 0;
	}
	printf("전체 학생들의 평균 성적 = %d\n", total/(CLASSES*STUDENTS));
	return 0;

}
