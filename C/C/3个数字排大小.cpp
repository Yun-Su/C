#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, c,t;
	scanf("%d%d%d",&a,&b,&c);
	if (b>a)
	{
		t = a;
		a = b;
		b = t;
	}
	if (c>b)
	{
		t = b;
		b = a;
		a = t;

	}
	if (c>a)
	{
		t = a;
		a = c;
		c = t;
	}
	printf("���ִӴ�С����Ϊ%d,%d,%d",a,b,c);
	system("pause");
}
