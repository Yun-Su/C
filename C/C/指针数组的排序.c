#include<stdio.h>
int main()
{
	char *p[4] = {"write","hello","core","asdf"};
	for (int i = 0; i < 4; i++)
	{
		//printf("*a[%d]=%s\n",i,p[i]);
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j <3; j++)
		{
			if (*p[j] > *p[j+1])
			//常量的值是无法进行赋值和交换的
			//所以要依赖指针来进行排序和交换操作
			{
				int *t=*(p+j);
				*(p+j) = *(p+j + 1);
				*(p+j + 1) = t;
				//printf("%d %d\n", *(p + j), *(p + j + 1));
			}
		}
	}
	for (int i = 0; i < 4; i++)
	{
		printf("%s\n",*(p+i));
	}
	getchar();
	return 0;
}