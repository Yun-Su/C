#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
int main()
{
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		a[i] = i;
		printf("%d\n", a[i]);
	}
	int *p = a;//
	printf("指针的值为%d\n", *p);
	//数组的本质为一个带有地址和下标的指针。
	printf("数组的大小为%d,%d", sizeof(a), sizeof(*p));
	//*p存储了数组a第一个元素的地址，
	//sizeof(a)表示整个数组的大小
	system("pause");
}