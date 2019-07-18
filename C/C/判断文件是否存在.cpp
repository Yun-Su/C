#include<stdio.h>
#include<stdlib.h>
#include<io.h>
int main()
{
	printf("%d", _access("C:\\1", 0));//access函数判断文件夹是否存在,-1为不存在，0为存在
	if ((_access("C:\\1",0))==0)
	{
		printf("文件存在\n");
	}
	else if((_access("C:\\1",0))==-1)
	{
		printf("文件没找到\n");
	}
	else
	{
		printf("不知所措\n");
	}
	getchar();
	return 0;   
}