#include<stdio.h>
#include<stdlib.h>
void bj(char *pa, char *pb)
{
	while((*pa!='\0')||(*pb!='\0'))
	{
		if(*pa != *pb)
		{
			printf("�ַ��������\n");
			return;//???????????
		}
		pa++;
		pb++;
	}
	printf("�ַ������\n");
}
int main()
{
	char a[20] = "hello.world";
	char b[24] = "hello.world";
	bj(a, b);
	getchar();
}