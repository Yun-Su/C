#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, i=5;
	int b[10] = {0};
	while (i)
	{
		scanf_s("%d",&b[i-1]);
		i--;
	}
	for (i=0; i<5;i++)
	{
		printf("%d ", b[i]);
	}
	system("pause");
}