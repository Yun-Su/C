#include<stdio.h>
#include<stdlib.h>
#include<string.h>
union aaa
{
	char a[50];
	char b[50];
	char c[50];
};
int main()
{
	union aaa a1 = {"hello.world"};
	//���������һ��ֻ�ܳ�ʼ��һ����Ա��
	printf("%s\n%s\n%s\n", a1.a, a1.b, a1.c);
	//��������������
	union aaa a2;
	a2= a1;
	//�������������ֱ�Ӹ�ֵ
	printf("a1==%s,%s,%s\n", a2.a,a2.b,a2.c);
	getchar();
}