#include<stdio.h>
#include<stdlib.h>
struct
{
	int a;
	char b;
}a1, a2;
//ֻ��ͨ�����ַ�ʽ���������ṹ�����
//�����ṹ�������������������ṹ�����
int main()
{
	a1.a = 100;
	a1.b = 'X';
	printf("%d,%c", a1.a, a1.b);
	getchar();
}