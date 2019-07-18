#include<stdio.h>
#include<stdlib.h>
int main()
{
	char a;
	scanf("%c",&a);
     (a>='a'&&a<='z')?putchar(a):printf("%c",a+32);//¾øÃî
     system("pause");
}
