#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
int main()
{
	char *a="abcdefge";
	char *b=strchr(a,'e');
	//在字符串a中查找字符‘e’首次出现的位置 
	if(b==NULL)
	{
		printf("没找到");
	}
	else 
	{
		printf("找到了，地址为%x",b); 
	}
	system("pause");
 } 
