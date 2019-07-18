#include<stdio.h>
int main()
{
	char oldname[50] = "D:\\abcd.txt";
	char newname[50] = "D:\\1234.txt";
	//如果二者不在同一路径则会把原来的文件重命名
	//并剪切到"newname"所在目录
	if (rename(oldname, newname) == 0)
	{
		printf("文件改名成功\n");
	}
	else
	{
		printf("文件改名失败\n");
	}

	char oldfolder[30] = "D:\\360Downloads\\old";
	//文件夹重命名 
	char newfolder[30] = "D:\\new";
	if (rename(oldfolder, newfolder) == 0)
	{
		printf("文件夹重命名成功\n");
	}
	else
	{
		printf("文件夹重命名失败\n");
	}
	//同上,如果"oldfolder"中有文件
	
	//就会一并剪切到"newfolder"并重命名
	//文件夹在C盘的时候好像操作不了,原因未知,权限问题???
	getchar();
	return 0;
}