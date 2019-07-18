#include<stdio.h>
#include<Windows.h>
int main()
{
	int num1 = 10;
	int num2 = 200;
	printf("%x,%x", &num1, &num2);
	int *p=NULL;//不指向任何地址的指针
	scanf_s("%x", &p);//读入一个地址给指针
	printf("%x,%d", &p,*p);//打印出指针和地址
	system("pause");
}