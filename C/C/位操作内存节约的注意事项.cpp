#include<stdio.h>
#include<stdlib.h>
struct aaa
{
	unsigned int a : 1;
	unsigned char b : 2;
	unsigned char : 3;//允许定义一个无名的位，但无法使用
	//char c : 9;//超出char类型数据的大小。会报错
	//char d : 0;//位的宽度必须大于0，否则会报错
};
int main()
{
	struct aaa *p;
	p = (struct aaa *)malloc(sizeof(struct aaa));
	//printf("%p\n",&(struct aaa));
	//结构体此刻还没完成初始化，无法找到地址。
	p->a = 2;//超出结构体限定大小，会产生溢出
	p->b = 3;
	printf("%d,%d\n", p->a, p->b);
	printf("结构体的地址位%p\n", p->a);
	//取地址只能精确到字节，无法精确到某一位，
	//结构体成员的位地址无法获取，
	getchar();
}