#include<stdio.h>
#include<Windows.h>
int main()
{
	double num = 10.2;
	double *p = &num;//地址有8个字节
	//double *p为8个字节
	double *px = &p;
	//double *px有8个字节，而指针的地址只有4个字节
	//无法初始化
	printf("%d  %d", sizeof(*px), sizeof(&p));
	system("pause");
}