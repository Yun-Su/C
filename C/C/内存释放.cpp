#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
int main()
{
	while (1)
	{
		int *p = (int *)malloc(1024 * 1024*100);
		Sleep(1000);
		free(p);//每块内存只能释放一次，
		        //不能反复释放
		int *px = NULL;
		free(px);
		free(px);//空指针可以反复释放
		Sleep(1000);
	}
	system("pause");
}