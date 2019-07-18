#include<stdio.h>
#include<Windows.h>
int main()
{
	//8位是一个字节，1024个字节为1kb
	malloc(1024 * 1024 *1024);//malloc的函数返回值也是一个空指针
	                          //它占用了100M的内存
	malloc(50);//malloc函数申请了50个字节的内存空间
	void *p = malloc(20);//void指针指向一片有20个字节的内存
	                     //void类型的指针可以转换为任意类型的指针
	int *px = (int *)p;//将void类型的指针强制转换为int类型
	                   //并赋值给*px,
	for (int i = 0; i < 5; i++)//px[i]??????????????????????
	{
		px[i] = i;                  //给这20个字节的内存空间赋值
		printf("%d\n", px[i]);
	}
	system("pause");

}