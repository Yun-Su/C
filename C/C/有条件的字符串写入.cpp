#include<stdio.h>
#include<string.h>
int main()
{
	char a[30] = "123456789";
	char b[30] = "ABCDEFGH";
	_memccpy(a, b, 'p', 5);
	//���ַ���b�п����ַ�д�뵽�ַ���b
	//�����ַ���b�е��ַ���u������ֹ����������ַ�д�볤��Ϊ7
	printf("%s", a);
	getchar();

}