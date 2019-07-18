#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
	int num;
	scanf_s("%d", &num,4);
	int data =1<< 31;
	for (int i = 1; i <= 32; i++)
	{
		printf("%c", (num&data ? '1' : '0'));
		if (i % 4 == 0)
		{
			printf(" ");
		}
		num <<= 1;
	}
	system("pause");
}