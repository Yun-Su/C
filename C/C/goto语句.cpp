#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
int main()
{
	goto a2;
a1:printf("hello.world\n");//原本应该答应两个字符的，加入goto以后就跳过一些代码了
	Sleep(2000);
a2:printf("hello.23333\n");
	goto a1;//会引起死循环，c语言会从上往下执行代码，goto a1会直接跳到第一个代码段执行
	getchar();
	/*先输出a2，再输出a1*/
}