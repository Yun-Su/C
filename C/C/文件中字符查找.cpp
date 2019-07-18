#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<Windows.h>
int main()
{
	FILE *pf = fopen("D:\abc.txt","r+");
	char str[30] ="0";
	char a[10] = "hello";
	while (char *p=(fgets(str,28,pf)))
	{
		//printf("%s\n",p);
		if (char *pp=(strstr(str, a)))
		{
			printf("是否需要修改,按y确认\n");
			if (getchar() == 'y')
			{				
				printf("%s",pp);
			}
			Sleep(2000);
		}
	}
	getchar();
	return 0;
}