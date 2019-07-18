#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
struct aaa
{
	char a[20];
	int b;
	char c;
};
int main()
{
	struct aaa a1[1] = { {"asdf",3,'c' } };
	//结构体数组的参数a1[i]代表一个数组中，有i个结构体
	//每个数组元素都是一个结构体
	char a[50];
	scanf_s("%s", a,50);
	printf("你要找的是%s\n",a);
	int num = sizeof(a1) / sizeof(struct aaa);
	//循环的次数=数组大小/结构体变量大小
	//???????????
	for (int i = 0; i < num; i++)
	{
		if (strcmp(a, a1[i].a) == 0)
		{
			printf("找到\n");
		}
		else
		{
			printf("并没有找到\n");
		}
	}
	system("pause");
}