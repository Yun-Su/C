#include<stdio.h>
#include<stdlib.h>
int main()
{
	const int num[5] = { 4,5,1,3,2 };
	int *p[5] = { &num[0],&num[1], &num[2], &num[3], &num[4] };
	//����һ��ָ������,��ָ������洢��5��ָ��ĵ�ַ
	//p[i]�ڴ洢����num[i]����Ԫ�صĵ�ַ
	int **b = p;
	printf("p=%p  b=%p\n",p,b);
	//???��ַһ��???
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