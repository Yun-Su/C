#include<stdio.h>
#include<Windows.h>
int main()
{
	int x = 100;
	//int *��ʾһ��ָ��int���͵ĵ�ַ��ָ�����
	int *p = &x;//p��һ��ָ�������������ָ���κ�һ����ַ
	printf("%d  %d\n", x, *p);
	*p = 200;
	printf("%d\n", *p);

	system("pause");
}