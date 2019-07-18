#include<stdio.h>
#include<stdlib.h>
int main()
{
	const int num[5] = { 4,5,1,3,2 };
	int *p[5] = { &num[0],&num[1], &num[2], &num[3], &num[4] };
	//创建一个指针数组,该指针数组存储了5个指针的地址
	//p[i]内存储的是num[i]各个元素的地址
	int **b = p;
	printf("p=%p  b=%p\n",p,b);
	//???地址一样???
	for (int i = 0; i <5; i++)
	{
		for (int j = 0; j<5-i-1; j++)
		{
			if (**b< **(b+1))
			{
				int *t = **b;
				**b = **(b + j);
				**(b + j) = t;
			}
		}
	}
	printf("%d %d %d %d %d",**b,**(b+1),**(b+2),**(b+3),**(b+4));
	getchar();
	return 0;
}