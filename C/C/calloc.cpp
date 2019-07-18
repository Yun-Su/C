#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
int main()
{
	int a;
	scanf_s("%d", &a);
	int *p=(int *)calloc(a,sizeof(int));
	//申请a个int类型大小的内存空间，
	//申请以后会全部初始化为0
	for (int i = 0; i < a; i++)
	{
		p[i] = i;
		printf("%d\n", p[i]);
	}
	system("pause");
}