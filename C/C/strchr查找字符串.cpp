#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
int main()
{
	char *a="abcdefge";
	char *b=strchr(a,'e');
	//���ַ���a�в����ַ���e���״γ��ֵ�λ�� 
	if(b==NULL)
	{
		printf("û�ҵ�");
	}
	else 
	{
		printf("�ҵ��ˣ���ַΪ%x",b); 
	}
	system("pause");
 } 
