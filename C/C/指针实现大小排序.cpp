#include<stdio.h>
#include<Windows.h>
int main()
{
	int a, b;
	scanf_s("%d,%d", &a, &b);
	int *p1 = &a;//指针必须初始化，否则会出现野指针现象
	int *p2 = &b;
	if (a > b)
	{
		int *px = NULL;
		px = p1;//指针不能交换，地址可以交换
		p1 = p2;
		p2 = px;
	}
	printf("%d,%d",*p1,*p2);
	system("pause");
}