#include<stdio.h>
#include<Windows.h>
int main()
{
	int a[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	printf("%p,%p,%p\n", a, &a, *a);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%p  ", &a[i][j]);
		}
		printf("\n");
	}
	printf("%d,%d,%d\n", sizeof(*a), sizeof(*&a), sizeof(**a));
	//第一个为行指针，第二个为整个数组，第三个为a的地址
	//所以大小会有不同
	printf("%p,%p,%p\n",*(a)+1,*(a+1)+2,*(a+2)+3);
	//分别指向第一行第2个，第二行第3个，第三行第4个地址
	printf("%d\n", *(a[0]+2));//取出第一行第三个
	system("pause");
}