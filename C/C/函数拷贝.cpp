#include<stdio.h>
#include<stdlib.h>
//返回一个拷贝好的字符串，
char * mystrcpy(char *dest,char *source )
{
	char *last = NULL;
	if (dest == NULL || source == NULL)
	{
		return last;
	}
	last = dest;//存入数组str的首地址。？？？？？？？？？？？
	while ((*dest++ = *source++) !='\0');
	return last;
} 
int main()
{
	char str[40];
	printf("%s", mystrcpy(str,"too young,too simple!naive!"));
	getchar();
}