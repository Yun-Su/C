#include<stdio.h>
#include<Windows.h>
int main()
{
	int a[3][4];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			a[i][j] = i * 4+j;
			printf("a[%d][%d]=%-3d%x\n",i,j,a[i][j],&a[i][j]);
		}
		printf("\n");
	}


	printf("%x\n%x\n%x\n", &a[0],&a[1],&a[2]);
	//每个二位数组相当于一个1维数组记录了元素的首地址，
	//然后再在每个地址上增加一个一维数组
	system("pause");
}