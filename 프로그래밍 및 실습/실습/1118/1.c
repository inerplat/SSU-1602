#define STUDENTS 5
#include <stdio.h>
int main()
{
	int grade[STUDENTS] = { 30,20,10,40,50 };
	int i, s;
	for (i = 0; i < STUDENTS; i++)
	{
		printf("번호 %d : ", i + 1);
		for (s = 0; s < grade[i]; s++) printf("*");
		printf("<%d 점>\n",grade[i]);
	}
	return 0;
}
