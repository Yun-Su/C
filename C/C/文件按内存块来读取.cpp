#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num[100];
	FILE *pf;
	pf = fopen("D:\\a.txt", "rb");//二进制写入的模式来打开文件
	if (pf == NULL)
	{
		printf("文件打开失败\n");
	}
	else
	{
		int res = 0;
		res = fread(num, sizeof(int), 100, pf);
		//读取文件写入内存
		//res 返回读取成功的个数
		//num 要写入内存的首地址
		//sizeof 元素的大小
		//100 元素的数量
		//pf 文件的指针
		if (res == 100)
		{
			printf("读取成功\n");
		}
		for (int i = 0; i < 100; i++)
		{
			printf("num[%d]=%d\n", i, num[i]);
		}
		fclose(pf);
		system("pause");
	}
}