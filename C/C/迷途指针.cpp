#include<stdio.h>
#include<Windows.h>
int main()
{
	int *p = (int *)malloc(sizeof(int) * 10);
	for (int i = 0; i < 10; i++)
	{
		p[i] = i;
		printf("%d\n", p[i]);
	}
	printf("指针的地址为%p", p);
	free(p);//指针所对应的内存空间已经被释放
	printf("%p", p);//指针依然指向被释放的内存地址
	//此时称之为迷途指针，指向一片内存里的垃圾数据
	p = NULL;
	//每使用完指针应该先释放内存，
	//然后指针置空
	system("pause");
}