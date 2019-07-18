#include<stdio.h>
#include<Windows.h>
void cd(int(*p)[4])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (*(*(p + i) + j) < 17)
			{
				printf("不及格的家伙是\n");
				for (int x = 0;x< 4; x++)
				{
					printf("%d\n", *(*(p + i)+x));
				}
				printf("\n");
				break;
			}
		}
	}
}
int main()
{
	int a[3][4] = { {11,13,15,17},{22,24,26,28},{9,10,11,12} };
	cd(a);
	system("pause");
}