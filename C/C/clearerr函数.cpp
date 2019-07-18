#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *pf = fopen("D:\\abc.txt", "w");
	if (pf == NULL)
	{
		printf("文件打开失败01\n");
		perror("原因是");
	}
	else
	{
		fputs("苟利国家生死已", pf);
		rewind(pf);//将指针重新移动到开头
		char ch = fgetc(pf);//从文件中读取一个字符
		if (ch == EOF)
		{
			if (feof(pf))
			{
				printf("读到了文件末尾\n");
				getchar();
				clearerr(pf);
				//重置文件流的状态
			}
			if (ferror(pf))
			{
				printf("文件读取出错\n");
				getchar();
				clearerr(pf);
				//重置文件流的状态
			}
		}
		
	}
	fclose(pf);
}