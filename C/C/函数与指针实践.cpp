#include<stdio.h>
#include<Windows.h>
int maxdata(int a,int b)
{
	return  a>b ? a : b;
}
int mindata(int a,int b)
{
	return  a<b ? a: b;
}
int adddata(int a,int b)
{
	return a + b;
}
int run(int a, int b, int(*p)(int, int))//新建一个函数指针
//?????????????????????????????

{
	return p(a, b);
}
int main()
{
	int a = 10, b=100, x =0;
	scanf_s("%d",&x);
	switch (x)
	{
	case 1:
		printf("%d", run(a, b, maxdata));
		break;
	case 2:
		printf("%d", run(a, b, mindata));
		break;
	case 3:
		printf("%d", run(a, b, adddata));
		break;
	default:
		break;
	}
	system("pause");
}