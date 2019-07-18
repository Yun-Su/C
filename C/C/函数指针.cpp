#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
//函数指针
void msg(char * str)
{	
	MessageBoxA(0, "这是内容",str, 0);
} 
void add(int a,int b)
{	
	printf("%d\n", a + b);
}
int main()
{
	msg("这是标题//直接调用");//直接调用msg函数
	getchar();
	void(*px)(char * str)=msg;
	//新建一个函数指针,并对指针进行初始化。
	px("间接调用函数");
	void (*p)(int,int) = add;
	p(1,2);
	system("pause");
}