#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 1;
a1:if (i <= 100)
{
	i++;
   while(i % 2 == 0)
   {
	   printf("%d\n", i);
	   break;//绝妙的算法。试一下continue？
   }
	goto a1;
}
   getchar();
}