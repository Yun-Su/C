#include<stdio.h>
#include<stdlib.h>
int main()
{
	unsigned char a = 11;
	unsigned int b = 23;
	float c = 12.3;
	double d = 10.2;
	printf("%d,��СΪ%d,%d,%d\n", a&b, sizeof(a&b), a | b,a^b);//�ֽڴ�С��һ��
	//�޷������͵������ڽ���λ�����ʱ����Զ������ֽڴ�С���������͵�ת����

	//printf("%d\n", c | d);
	//λ����ֻ������int�ͺ�char�͵��ַ������������ͻᱨ��
	getchar();
}