#include<stdio.h>
#include<Windows.h>
int main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,0 };
	printf("%x\n\n", a);//a被编译器解析为首地址
	for (int i = 0; i < 10; i++)
	{
		printf("%x\n", a + i);//每次加一个sizeof(数据类型)大小的数
	}
	system("pause");
}