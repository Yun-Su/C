#include<stdio.h>
#include<string.h>
int main()
{
	char a[15]="123456789";
	char *b=strchr(a,'5');
	//strchr(a+3,'5')��ʾ���ַ����ĸ�Ԫ�ؿ�ʼ����  
	//�����ַ����е�ĳ���ַ��� 
	//����ҵ������ַ����ڵĵ�ַ����һ�γ��ֵ�λ�ã���
	//���򷵻�NULL 
	if(b==NULL)
	{
		printf("û���ҵ�"); 
	}
	else
	{
		printf("�ҵ��ˣ���ַΪ%x,ֵΪ%c",b,*b);
	}
}
