#include<stdio.h>
#include<Windows.h>
int main()
{
	int num1 = 10;
	int num2 = 200;
	printf("%x,%x", &num1, &num2);
	int *p=NULL;//��ָ���κε�ַ��ָ��
	scanf_s("%x", &p);//����һ����ַ��ָ��
	printf("%x,%d", &p,*p);//��ӡ��ָ��͵�ַ
	system("pause");
}