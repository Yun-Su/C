#include<stdio.h>
#include<Windows.h>
int main()
{
	int a = 10,b = 20;
	int *pa = &a,*pb = &b;
	int **px = NULL;//指针必须初始化，否则会出现野指针现象
	//指针中  *代表指针表示 px代表指针地址. **代表取2次地址.
	scanf_s("%d,%d", &a, &b);
	if (a > b)
	{
		px=&pb;
	}
	else
	{
		px =&pa;
	}
 	printf("%d\n", **px);
	system("pause");
}