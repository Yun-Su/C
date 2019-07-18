#include<stdio.h>
int main()
{
	const char *p[4] = { "hello","word","goto","internet" };
	char b[4] = {"asdf"};
	for (char **pp = p; pp < p + 4; pp++)
	{
		//printf("%s \n", *pp);
	}
	char **pp = p;
	for (int i = 0; i < 4; i++)
	{
		for (int j = i + 1; j < 4; j++)
		{
			
			if (**(pp + i) > **(pp + j))
			{
				char **	px = *(pp + i);
				*(pp + i) = *(pp + j);
				*(pp + j) = px;
			}
		}
		printf("%s \n", *(pp + i));
	}
	getchar();
	return 0;
}