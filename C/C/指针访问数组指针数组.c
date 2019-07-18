#include<stdio.h>
int main()
{
	char *p[4] = { "asdf","1234","QERTY","134aerq" };
	//新建一个指针数组
	for (char **pp = p; pp < p + 4; pp++)
	{
		printf("%s\n", *pp);
		//%s参数仅能对应一个地址,而不是一个具体的值所以不能用**pp来进行打印输出
	}
	getchar();
	return 0;

}
