#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a[30] = "asdfghjklqwertyuiop123";
	char b[30] = "tyu";
	char *p = strstr(a, b);
	//比较两个字符串是否相等
	if (p == NULL)
	{
		printf("没找到\n");
	}
	else
	{
		printf("已找到");
		char c[30];
		strcpy_s(c, p + 3);
		printf("%s", c);
	}
	getchar();
}