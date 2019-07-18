#include<stdio.h>
#include<Windows.h>
int main()
{
	//int a[1024 * 1024 * 10];//数组只能处理小数据，因为内存不够
	int a[10];//数组在用完时会自动回收内存
	malloc(1024 * 1024);//不会自动回收内存，占着茅坑不拉屎

	while (1)
	{
		int *p = (int *)malloc(1024 * 1024 * 100);//给指针分配了100M内存
	                                          //并强制转换为int 类型
		Sleep(1000);
		free(p);                    //释放指针占用的多余内存
			                            //在进程管理中可以看到内存变化
		Sleep(1000);
	}
	system("pause");
}