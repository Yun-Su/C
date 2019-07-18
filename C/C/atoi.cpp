#include<stdio.h>
#include<stdlib.h>
int main()
{
	char a[20] = "2333";
	int num = atoi(a);
	//atoi(a+1)????????
	//将数字字符串转为数字
	//其它字符串会转换为0
	printf("%d", num);
	getchar();
}