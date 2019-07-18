#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<Windows.h>
int main()
{
	char path[30] = "D:\\abc.txt";
	FILE *pf = fopen(path, "r+");
	char str[30] = "0";
	char abc[10] = "hello";
	if (pf!=NULL)
	{
		while (char *pp=fgets(str, 29, pf))
		{
			printf("%s",pp);
			char *c = strstr(str,abc);
			//找到了所在行的内容
			if(c!=NULL)	
			{
				printf("%s",c);
			}
		}
	}
	else
	{
		printf("file open fail\n");
	}
	getchar();
}