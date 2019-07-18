#include<stdio.h>
#include<stdlib.h>
int main()
{
	unsigned int ch1 =63;
	//对4取余‭00111111‬
	printf("余数为%d\n", ch1 - (ch1&~3));
	getchar();
	return 0;
}