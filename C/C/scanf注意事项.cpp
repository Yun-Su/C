#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b,c;
	scanf_s("%d,%d,%d", &a, &b, &c);
	//�������ַ���ʱ��Ҫһ�����롮��������ᱨ��
	printf("%d,%d,%d,\n", a, b, c);
	scanf_s("%d,%d,%d   ", &a,&b,&c);
	//�����пո���Ҫ�������һ������Ȼ��س���������
	//���ǰ���ÿո�ϵͳ���Զ�����
	printf("%d,%d,%d", a, b, c);


	//int d=1;
	//int f;
	//scanf_s("%d", &d);  
	//����������ַ���d��1����һ���ڴ��ַȥ��ʼ����
	//1��windows����ϵͳ���ڴ��ַ��Ȼ��ͱ�����
	//scanf_s("%d", f); 
	//�������Ϊû�д����ַ������
	system("pause");
}