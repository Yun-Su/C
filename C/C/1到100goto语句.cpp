#include<stdio.h>
int main()
{
	int i = 1;
	int m=0;
a1:	if (i <=100)
   { 
	   m+=i;
	   printf("i=%d,m=%d\n",i,m);
	   i++;
	   goto a1;
   }
	getchar();
}