#include<stdio.h>
#include<Windows.h>
int a = 10;
int b = 20;
int * go()  //һ������ֵ��ָ��ĺ���
{
	return &a;
}
int main()
{
	printf("%d\n", *(go()));
	system("pause");
}