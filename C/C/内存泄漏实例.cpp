#include<stdio.h>
#include<Windows.h>
int main()
{
	for (int i = 0; i <3; i++)
	{
		int *p = (int *)malloc(1024 * 1024 * 100);
		//内存在使用完以后没有及时释放“free(p);”就会造成反复申请内存
		//导致操作系统崩溃，俗称内存泄漏
		Sleep(3000);
	}
	int *px = (int *)malloc(1024 * 1024 * 100);
	//？？？？？？？？？？内存泄漏
	int *px =NULL;//如果指针地址被改变，或者指针消失了。
	free(px);//释放的内存是NULL这个地址的内存
	//原地址的内存并没有被释放
	system("pause");
}