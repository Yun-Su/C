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
	//ÿ����λ�����൱��һ��1ά�����¼��Ԫ�ص��׵�ַ��
	//Ȼ������ÿ����ַ������һ��һά����
	system("pause");
}