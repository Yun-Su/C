#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void cz(char *pa, char *pb, int c, int d)
{
	int x =NULL;
	int y = NULL;
	for (int i = 0; i <(c - d); i++)
	{
	
		//printf("%c,\n", *pa );
		if (*pa==*pb)
		{
			while(d)
			{
				if (*pa!= *pb)
				{
					printf("%c²»µÈÓÚ%c\n", *pa,*pb);
					y= 0;
				}
				else
				{
					x = 1;
				}
				pa++;
				pb++;
				d--;
			}
		}
		pa++;
	}
//	printf("%d,%d,\n", x, y);
}
int main()
{
	char a[30] = "asdfghjkl";
	char b[30] = "gj";
	int c = strlen(a);
	int d = strlen(b);
	cz(a, b, c, d);
	getchar();
}