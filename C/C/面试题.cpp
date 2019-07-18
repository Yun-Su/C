#include<stdio.h>
int main() 
{
	int x = 9999;
	int c = 0;
	while (x)
	{
		c++;
		x = x&(x-1);
	}
	printf("%d\n", c);
	getchar();
}