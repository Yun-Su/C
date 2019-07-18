#include<stdio.h>
#include<Windows.h>
int main()
{
	int a = 10;
	double b = 20.23;
	int *p1 = &a;
	double *p2 = &b;
	void *px;//
	px = p1;//void类型的指针变量可以用来专递任何类型的地址
	//px = p2;
	//printf("%d", *px);//因为void类型指针的指向地址不明确
	//所以无法取出void 类型指针的值
	printf("%d", *((int *)px));//所以要强制转换void指针到对应
	                           //的指针类型
	system("pause");
	
}