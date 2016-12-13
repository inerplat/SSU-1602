#include <stdio.h>
#define SIZE 3
struct student {
	int number;
	char name[20];
	double grade;
};

int main()
{
	int i;
	student list[SIZE];

	for (i = 0; i < 3; i++)
	{
		printf("학번을 입력하시오 : ");
		scanf("%d", &list[i].number);

		printf("이름을 입력하시오 : ");
		scanf("%s", list[i].name);

		printf("학점을 입력하시오 : ");
		scanf("%lf", &list[i].grade);
	}

	for (i = 0; i < 3; i++)
	{
		printf("학번 : %d\t이름 : %s\t학점 : %lf\n", list[i].number, list[i].name, list[i].grade);
	}
}
