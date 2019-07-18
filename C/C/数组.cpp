#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, a;
	int c[3] = {};//数组为空时，默认初始化为0；
	for(i=0;i<3;i++)
	{
		scanf_s("%d", &c[i]);
	}
	for (i=0; i < 3; i++)
	{
		printf("%d\n", c[i]);
	}
	system("pause");
}