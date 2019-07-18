#include<stdio.h>
#include<Windows.h>
int main()
{
	int num = 10;
	int *p = &num;
	printf("%d,%d\n", num, *p);
	num = 5;
	printf("%d,%d\n", num, *p);
	*p =9;
	printf("%d,%d\n", num, *p);
	system("pause");
}