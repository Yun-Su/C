#include<stdio.h>
#include<stdlib.h>
struct aaa
{
	int a;
	char b;
	int c;
}a1[3] = { {1,'a',3}, {2,'6',2}, {3,'9',4} };
//������һ���ṹ���������
//�������˳�ʼ��
struct
{
	int a;
	char b;
}b1[20];
//������һ�������ṹ���������
struct ccc
{
	int a;
	int b;
};
int main()
{
	struct ccc c1[20];
	//����һ���ṹ������
	//�ṹ���������ڴ�����������
}