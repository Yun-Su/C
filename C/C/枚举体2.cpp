#include<stdio.h>
#include<stdlib.h>
enum aaa
{
	a=10,b,c,d,e=10,f,g,h,i,j
	//???????????????????
};
int main()
{
	enum aaa a1 = b;
	enum aaa a2 = f;
	if (a1 > a2)
	{
		printf("a1=%d\n", a1);
	}
	else
	{
		printf("a1=%d a2=%d\n",a1,a2);
	}
	getchar();
}