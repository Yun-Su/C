#include<stdio.h>
#include<stdlib.h>
#include<string.h>
union aaa
{
	int a;
	char c[5];
};
int main()
{
	union aaa a1;
	printf("%d", sizeof(a1));
	//c[5]Ϊ5���ֽڴ�С
	//aΪ4���ֽڴ�С
	//������Ĵ�С����Ϊ�������Ա��С��������
	//������Զ�����ֽ�
	getchar();

}