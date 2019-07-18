#include<stdio.h>
#include<stdlib.h>
void kb(char *pa, char *pb)
{
	while((*pa != '\0') && (*pa != NULL))
	{
		pa++;
	}
	while(*pb!= '\0')
	{
		*pa= *pb;
		pa++;
		pb++;
	}

}
int main()
{
	char a[20] = "note";
	char b[20] = "pad";
	kb(a, b);
	printf("×Ö·û´®Îª%s", a);
	system(a);
	getchar();
}