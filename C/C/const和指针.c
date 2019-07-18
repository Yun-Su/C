#include<stdio.h>
int main()
{
	const int a[4] = { 1,3,5,4 };
	int *p[4] = { &a[0],&a[1],&a[2],&a[3] };
	for (int i = 0; i < 4; i++)
	{
		for (int j = i + 1; j < 4; j++)
		{
			if (**(p+ i) < **(p + j))
			{
				int **temp = **(p + i);
				**(p + i) = **(p+ j);
				**(p + j) =temp;//
			}
		}
		printf("%d\n", **(p + i));
	}
	getchar();
	return 0;
}