#include <stdio.h>
void print_menu()
{
	printf("1. 햄버거\n2. 치즈버거\n3. 샌드위치\n4. 종료\n원하는 메뉴를 선택하시오 : ");
	return;
}
int get_menu_number()
{
	int n;
	scanf("%d", &n);
	if (n < 1 || n>4) return -1;
	else return n;
}
int main()
{
	int n;
INIT:
	print_menu();
	n = get_menu_number();
	if (n == -1)
	{
		printf("범위 안의 정수를입력하세요.\n");
		goto INIT;
	}
	if (n == 1) printf("햄버거를 선택하셨습니다.\n");
	else if (n == 2) printf("치즈버거를 선택하셨습니다.\n");
	else if (n == 3) printf("샌드위치를 선택하셨습니다.\n");
	else if (n == 4) return 0;
	return 0;
}
