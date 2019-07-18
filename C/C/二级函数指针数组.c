#include<stdio.h>
int jiaA(int x, int y)
{
	return x + y;
}
int jianB(int x, int y)
{
	return x - y;
}
void change(int(*p) (int x, int y))
{
	//函数有副本机制，新建一个变量接受指针P的值
	p = jianB;
	printf("change的地址%p\n", &p);
}
void changeA(int(**px)(int x, int y))
{
	*px = jianB;
}
int main()
{
	int(*p)(int x, int y) =jiaA;
	printf("%d\n", p(7,8));
	printf("       jiaA=%p\n",&p);
	change(p);//函数有副本机制，
	printf("%d\n", p(7, 8));//p()为函数拷贝之后的值，地址和change（p）不一样
	changeA(&p);
	//传入一个二级指针地址，修改成功
	printf("%d\n", p(7, 8));
	getchar();
	return 0;
}