#include<stdio.h>
#include<Windows.h>
int main()
{
	int a[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	printf("%p,%p,%p\n", a, &a, *a);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%p  ", &a[i][j]);
		}
		printf("\n");
	}
	printf("%d,%d,%d\n", sizeof(*a), sizeof(*&a), sizeof(**a));
	//��һ��Ϊ��ָ�룬�ڶ���Ϊ�������飬������Ϊa�ĵ�ַ
	//���Դ�С���в�ͬ
	printf("%p,%p,%p\n",*(a)+1,*(a+1)+2,*(a+2)+3);
	//�ֱ�ָ���һ�е�2�����ڶ��е�3���������е�4����ַ
	printf("%d\n", *(a[0]+2));//ȡ����һ�е�����
	system("pause");
}