#include<stdio.h>
#include<string.h>
int main()
{
	char a[30] = "123456789";
	char b[30] = "ABCDEFGH";
	_memccpy(a, b, 'p', 5);
	//在字符串b中拷贝字符写入到字符串b
	//遇到字符串b中的字符‘u’就终止拷贝，最大字符写入长度为7
	printf("%s", a);
	getchar();

}