#include<stdio.h>
#include<stdlib.h>
int cs(int a, int b)
{
	int c;
	c = a;
	a = b;
	b = c;
	return 0;
}
int main()
{
	int a, b;
	scanf_s("%d%d", &a, &b);
	cs(a,b);
	printf("%d,   %d\n",cs(a,b));
	system("pause");
}