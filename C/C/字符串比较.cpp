#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a[10]="456"; 
	char b[12]="456";
	int c=strcmp(a,b);
	//��ascll�����Ƚ� 
	//����ַ��Ƚ������ַ����Ĵ�С��\0�������Ƚ�
	//���������β������ 
	// ��������ַ�����ȷ���0��
	//a��С�ͷ���-1��
	// a�ϴ�ͷ���1 
	if(c==-1)
	{
		printf("��һ�����Ƚ�С");
	}
	else if(c==0)
	{
		printf("���������Сһ��"); 
	}
	else if(c==1)
	{
		printf("��һ�����Ƚϴ�");
	}
	printf("%d",c);
}
