#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a;
	scanf_s("%d", &a);
	switch (a)//switch只能处理int和char型数据类型
	{
	case 2:
		printf("2333\n");
		break;//语句在遇到break之前会一直运行下去
	default:
		putchar(a);
	}
	system("pause");
}