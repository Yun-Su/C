#include <stdio.h>
#include <string.h>
int main(void)
{
   char *a= "abcdefghijk";
   char *b= "cde"; 
   char *c;
   c=strstr(a,b);
   printf("%p\n",a);
   //�ַ������ң�
   //���ַ���a�в����ַ���b
   //���Ƿ�ƥ��
   //ƥ��᷵�������ַ���Ӧ�ĵ�ַ��
   //����᷵��NULL
   if(c==NULL)
   {
   	printf("û���ҵ�"); 
	} 
	else if(c!=NULL)
	{
		printf("�ҵ���\n");
		printf("%p\n",c);
	 }  
}

 
