#include<stdio.h>
#include<string.h>
int main()
{
	char a[20] = "asdfghjkl";
	char b= 'd';
	char *p=(char *)memchr(a,'w',10);
	//�ӵ�ַa��ʼ10���ֽ����ڲ����ַ�'q'
	//�Զ�����һ����ַ;
	printf("%c,%x", *p,p);
	getchar();
}