#include<stdio.h>
int main()
{
	int a = 0;
	bool b;
	int c;
	b = scanf("%d", &c);
	if (b)
	{
		printf("成立\n");
		getchar();
	}
	else
	{
	printf("不成立\n");
	getchar();
	}
	getchar();
	return 0;

}