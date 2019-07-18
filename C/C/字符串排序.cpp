#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char str[10][20] = { "apple","google","ibm","intel","microsoft","facebook","oracle","cisco","hp","amd" };
	//新建一个二维数组，每个数组指向一个一维数组
	for (int i = 0; i < 10; i++)
	{
		for (int j = i + 1; j < 10; j++)
		{
			if (strcmp(str[i],str[j])> 0)
			{
				char temp[30];
				strcpy_s(temp, str[i]);
				strcpy_s(str[i], str[j]);
				strcpy_s(str[j], temp);
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		printf("\n%s", str[i]);
	}
	system("pause");
}