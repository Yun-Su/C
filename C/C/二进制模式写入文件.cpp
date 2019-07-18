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
	FILE *pf = fopen("D:\\1.txt","wb");//以二进制写入模式"b"打开这个文件
	if (pf!=NULL)
	{
		int res = 0;
		res = fwrite(num, sizeof(int), 100, pf);//将内存中的数据写入文件
		//写入成功后返回写入成功的数量
		//num:指向要写入的内存地址
		//sizeof(int) 设定要写入的单个元素大小
		//100 设定要写入的元素个数
		//pf 要写入的文件(指针)

		if (res == 100)
		{
			printf("写入成功\n");
			getchar();
		}
		fclose(pf);
	}
}