#include<stdio.h>
#include<Windows.h>
int main()
{
	int a[10];
	int *p=a;
	int **px = &p;
	for (int i = 0; i < 10; i++)
	{
		a[i] = i*3;
	}


	printf("%x\n\n", a+5);//a为一个地址，a+5代表从a的地址开始
	                     //前进5个数字元素，取出第六个元素
	                     //而不是a的值加5
	for (int i = 0; i < 10; i++)
	{
		printf("%x,%d,%d\n", &a[i], *(p + i), *(*px+i));
	}
	system("pause");
}