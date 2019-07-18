#include<stdio.h>
#include<stdlib.h>
void nz(char *p)
{
	int x = strlen(p);
	//while (*p != '\0')
	//{
	//	p++;
	//	x++;
	//	printf("%d\n", x);
	//
	//}无法运行???????????????????????
	for (int i = 0; i < (x/2); i++)
	{
		char ch = p[i];
		p[i] = p[x - 1 - i];
		p[x - 1 - i] = ch;
	}

}
int main()
{
	char a[20] = "asdfghjkl";
	nz(a);
	printf("%s",a);
 	getchar();
}