#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char a[4][7] = { "hello","world","ni","hao" };
	char (*p)[4] = { "hel"};
	//����һ������ָ��,ָ��һ�������ĸ�Ԫ�ص�һά�����ָ��
	//(*p)ָ��һ��һά����
	char *pp[4] = { "hello","world","ni","hao" };
	//����һ��ָ������,ÿ��Ԫ�ض���һ��ָ��
	//'[]'���ŵ����ȼ�����'()',Ҳ����'*'
    //�����http://www.slyar.com/blog/c-operator-priority.html
	printf("%d %d %d", sizeof(a), sizeof(*p), sizeof(*pp));
	//sizeof(a)Ϊ��������Ĵ�С
	//sizeof((*p))Ϊ������ÿһ��Ԫ�صĴ�С���ܺ�
	//sizeof(*pp)Ϊ������ÿ��Ԫ��(Ԫ���ڴ洢��ָ��)�Ĵ�С���ܺ�
	getchar();
	return 0;

}