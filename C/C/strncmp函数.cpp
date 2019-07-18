#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a[20]="123456781";
	char b[25]="123456789";
	if(strncmp(a,b,8)==0)
	{
		printf("a和b前面8个字符相等"); 
	}
	else
	{
		printf("不相等");
	}
	
}
