#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num[100];
	for (int i = 0; i < 100; i++)
	{
		num[i] = i;
	}
	FILE *pf;
	pf = fopen("D:\\a.txt", "wb");//二进制写入的模式'b',打开文件a.txt
	if (pf == NULL)
	{
		printf("文件打开失败\n");
	}
	else
	{
		int res = 0;
		res=fwrite(num,sizeof(int),100,pf);
		//将内存写入文件
		//num 确定要写入的内存的首地址
		//sizeof() 确定要写入内存的首地址的大小
		//100 写入元素的个数
		//pf 写入到指定的文件指针中
		if (res == 100)
		{
			printf("写入成功\n");
		}
		else
		{
			printf("写入失败\n");
		}
		fclose(pf);
		printf("文件打开成功\n");
	}
	system("pause");
}