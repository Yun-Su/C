#include<stdio.h>
#include<stdlib.h>
struct aaa
{
	int num1;
	char str1[100];
	//�ڽṹ����Ƕ��һ���ṹ�壬��û�д����ṹ���ʵ��
	//�ṹ���ڲ��ı����ᱻ����ĸ�ṹ��ĳ�Ա����
	struct bbb
	{
		int num2;
		char str2[100];
	};
};
int main()
{
	struct aaa a1;
	a1.num1 = 100;
	a1.num2 = 20;
	//c++���﷨�淶�²���
	//a1Ϊbbb�Ľṹ���Ա
	printf("%d", a1.num2);
	
	getchar();
	getchar();
}