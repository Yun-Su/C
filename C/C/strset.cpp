#include<stdio.h>
#include<string.h>		
#include<stdlib.h>
int main()
{
	char a[20] = "123456";
	_strset_s(a, '3');
	//把数组中的字符替换为3
	//_strset_s(a,'\0');清空字符串
	printf("%s", a);
	getchar();
}