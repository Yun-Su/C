#include<stdio.h>
#include<stdlib.h>
int main()
{
	char  a, b, c;
	scanf_s("%c%c%c", &a,4, &b,4, &c,4);
	//在读入字符的时候中间要插入参数
	printf("%d,%d,%d\n", a, b, c);
	system("pause");
}