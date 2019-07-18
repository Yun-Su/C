#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
void nz(char *p)
{
	int i = 0;
	if ((*(p+i)< 97) && (*(p+i)!= '\0'))
	{
		*(p+i)+= 32;
		i++;
	}
	system(p);
}
int main()
{
	int i = 0;
	char a[30] = "TaskList";
	nz(a);
	getchar();
}