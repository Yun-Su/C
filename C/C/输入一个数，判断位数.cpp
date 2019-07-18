#include<stdio.h>
#include<stdlib.h>
int jia(int a)
{
	int b=0;
	while (a)
	{
		a /= 10;
		b++;
	}
	return b;
}
int main()
{
	int a, b;
	scanf_s("%d", &a);
	jia(a);
	printf("%d\n", jia(a));
	system("pause");
}