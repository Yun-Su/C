#include<stdio.h>
int jiafa(int a, int b)
{
	return a + b;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("%d",jiafa(a,b));//先声明，再调用
	getchar();
	
}