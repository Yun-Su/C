#include<stdio.h>
#include<Windows.h>
int main()
{
	int a = 10, b = 100;
	int *p;
	int x;
	printf("%x  %x", &a, &b);
	scanf_s("%x", &x);//????????
	p = (int *)x;//��һ����ֵǿ��ת��Ϊָ��ĵ�ַ
	*p = 3;
	printf("%d   %d", a, b);
	system("pause");
}