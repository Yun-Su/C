#include<stdio.h>
#include<stdlib.h>
#include<memory.h>
int main()
{
	char a[30] = "1234567890,ABCDEFGHIJK";
	memset(a,'A',10);//��ָ����ַ��ĳ���ڴ�ռ��������д��
	//��ַ���ַ���������
	printf("%s", a);
	getchar();
}