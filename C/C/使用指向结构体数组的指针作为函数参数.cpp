#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
struct aaa
{
	int a;
	char b;
	char c[30];
};
void change(struct aaa a1)
//������Ҫʹ�ýṹ����Ϊ�������˷��ڴ�
{
	a1.a = 1000;
	//�˴���ֵ����ı�ԭ����ֵ
	//�������ṹ������ĳ�Ա�ڲ�ͬ���ڴ��ַ��
}
int main()
{
	struct aaa a1;
	a1.a = 100;
	change(a1);

	printf("%d", a1.a);
	getchar();
}