#include<stdio.h>
#include<stdlib.h>
int jia(int a)
{
	/*
	9876 xyzh
	x=a/1000
	y=a%1000/100
	z=a%1000%100/10    
	h=a%1000%100%10/1	 
	*/
	int x=0;
	while (a)
	{
		a /= 10;
		x++;
	}
	return x;
}
int main()
{
	int a=0;
	int i=jia(a);
	scanf_s("%d", &a);
	jia(a);
	printf("你输入的位数是%d\n", jia(a));
	for (i; i > 0; i--)
	{
		int j=i;
		for (j; j > 0; j--)
		{
			printf("hello.world  %d");
		}
		printf("\n");
	}
	system("pause");
}