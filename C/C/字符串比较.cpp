#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a[10]="456"; 
	char b[12]="456";
	int c=strcmp(a,b);
	//以ascll码来比较 
	//逐个字符比较两个字符串的大小到\0处结束比较
	//或者数组结尾处结束 
	// 如果两个字符串相等返回0，
	//a较小就返回-1，
	// a较大就返回1 
	if(c==-1)
	{
		printf("第一个数比较小");
	}
	else if(c==0)
	{
		printf("两个数组大小一样"); 
	}
	else if(c==1)
	{
		printf("第一个数比较大");
	}
	printf("%d",c);
}
