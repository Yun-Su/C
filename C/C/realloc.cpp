#include<stdio.h>
#include<Windows.h>

//realloc函数，在内存空间中扩展一部分内存以容纳新数据
//若扩展的内存不足，就会重新申请一段内存空间，把原来的数据复制过去
//并对原来的内存空间进行释放。
int main()
{
	int a;
	scanf_s("%d", &a);
	int *p = (int *)malloc(a * sizeof(int));
	for (int i = 0; i < a; i++)
	{
		*(p + i) = i;
		printf("%d\n", *(p + i));
	}
	int b;
	scanf_s("%d", &b);
	int *px = (int *)realloc(p,sizeof(int)*(a+b));
	//realloc(内存空间的起始位置，大小)
	//重新给后来扩充的数据分配内存
	//
	//???????????????????
	for (int i = 0; i < (a + b); i++)
	{
		p[i] = i;
		printf("%d\n", p[i]);
	}
	system("pause");
}