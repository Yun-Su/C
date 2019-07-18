#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, c;
	for (a = 6; a >0; a--)
	{
		for (b=0;b<a; b++)
		{
			printf("b=%d   ",b);
	   }
		printf("\n");
	}
	system("pause");
}