#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
union aaa
{
	int a;
	char b;
	char c[30];
};
int main()
{
	union aaa a1;
	a1.a = 100;
	a1.b ='w';
	sprintf_s(a1.c,"asdfghjkl");
	printf("%s\n",a1.c);
	//����������κ�ʱ��ֻ��һ����Ա����???????????
	//ÿ��ֻ�ܷ�������һ����Ա��
	//ÿ����ͬ������ڲ����г�Ա����ͬһ���ڴ�ռ�
	printf("�������СΪ%d\n",sizeof(a1));
	//����������Ĵ�С==�������Առ�ڴ������Ǹ�
	getchar();
}