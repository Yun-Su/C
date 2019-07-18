#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *a[5] = { "you","don't ","know","the","power" };
	printf("a=%p  *a=%p \n", a,*a);
	//指针数组中a中存储了数组的起始地址
	for (char **pp=a;pp<a+5;pp++)
	{
		//char **pp意为 char * *pp=a
		//创建指针*pp,并将*a中的地址赋值给pp
		//然后通过* *pp来取出*a对应的指针所指向的数据
		printf("%s %p\n",*pp,pp);
	}
	getchar();
	return 0;

}