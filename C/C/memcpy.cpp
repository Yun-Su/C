#include<stdio.h>
#include<stdlib.h>
#include<memory.h>
int main()
{
	char a[10] = "abcde";
	char b[20] = "12345";
	memcpy(a, b, 2);
	//��b�ַ�����ǰ�����ֽ������ֽ������ֽ�д�뵽�ַ���a��ǰ������
	printf("%s\n%s,\n", a,b);
	getchar();
}