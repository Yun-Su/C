#include<stdio.h>
#include<stdlib.h>
//����һ�������õ��ַ�����
char * mystrcpy(char *dest,char *source )
{
	char *last = NULL;
	if (dest == NULL || source == NULL)
	{
		return last;
	}
	last = dest;//��������str���׵�ַ������������������������
	while ((*dest++ = *source++) !='\0');
	return last;
} 
int main()
{
	char str[40];
	printf("%s", mystrcpy(str,"too young,too simple!naive!"));
	getchar();
}