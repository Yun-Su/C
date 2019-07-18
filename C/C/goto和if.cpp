#include<stdlib.h>
#include<stdio.h>
int main()
{
	int i = 0;
	a1:	if (i < 100)//if条件语句的本质是判断，
	{
		printf("%d\n", i);
		i++;
		goto a1;
	}
		getchar();
}