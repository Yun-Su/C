#include<stdio.h>
#include<Windows.h>
int main()
{
	double num = 10.2;
	double *p = &num;//��ַ��8���ֽ�
	//double *pΪ8���ֽ�
	double *px = &p;
	//double *px��8���ֽڣ���ָ��ĵ�ַֻ��4���ֽ�
	//�޷���ʼ��
	printf("%d  %d", sizeof(*px), sizeof(&p));
	system("pause");
}