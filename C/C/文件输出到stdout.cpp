#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *pf = stdout;
	fputs("helo,wrold\n",pf);
	//将字符输出到显示器
	system("pause");
}