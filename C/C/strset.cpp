#include<stdio.h>
#include<string.h>		
#include<stdlib.h>
int main()
{
	char a[20] = "123456";
	_strset_s(a, '3');
	//�������е��ַ��滻Ϊ3
	//_strset_s(a,'\0');����ַ���
	printf("%s", a);
	getchar();
}