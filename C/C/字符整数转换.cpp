#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
	char a[10] ="456";
	int b=0;
	int c= strlen(a);
	char *p = a;
	for (int i = 0; i < c; i++)
	{
		b +=(*(p + i) - 48)*(pow(10,(c-i-1)));
	}
	printf("½á¹ûÎª%d", b);
	getchar();
}