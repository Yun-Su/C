#include<stdio.h>
#include<stdlib.h>
#include<memory.h>
int main()
{
	char a[30] = "123aBC789";
	char b[30] = "123abcABCD";
	int num=_memicmp(a, b,6);

	//�Ƚ��ַ���a,b��ǰ6���ַ��Ƿ����
	//���Դ�Сд
	//������һ��ֵ,��ȷ���0������ȷ���-1
	printf("%d", num);
	getchar();
}