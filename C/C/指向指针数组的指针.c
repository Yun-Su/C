#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *a[5] = { "you","don't ","know","the","power" };
	printf("a=%p  *a=%p \n", a,*a);
	//ָ��������a�д洢���������ʼ��ַ
	for (char **pp=a;pp<a+5;pp++)
	{
		//char **pp��Ϊ char * *pp=a
		//����ָ��*pp,����*a�еĵ�ַ��ֵ��pp
		//Ȼ��ͨ��* *pp��ȡ��*a��Ӧ��ָ����ָ�������
		printf("%s %p\n",*pp,pp);
	}
	getchar();
	return 0;

}