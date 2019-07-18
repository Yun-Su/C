#include<stdio.h>
#include<Windows.h>
//成绩有不及格的同学的所有成绩
int main()
{
	int x =0;
	int a[3][4] = { {1,3,5,7},{75,16,2,98},{89,100,3,93} };
	for (int i = 0; i < 3; i++)
	{
		for (int j=0;j<4; j++)
		{
			if (a[i][j]<60)
			{
				for (int x= 0; x< 4; x++)
				{
						printf("%5d", a[i][x]);
				}
				printf("\n");
				break;//？？？？？？？？？？？？？
			}
		}
	}
	system("pause");
}