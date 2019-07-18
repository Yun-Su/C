//宏定义内的标记粘贴运算符（##）会合并两个参数。
//它允许在宏定义中两个独立的标记被合并为一个标记。
#include <stdio.h>
#define abc(n) printf("token"#n"=%d",token##n)
int main(void)
{
	int token3=1234;
	//定义一个常量在内存中,否则在abc()函数中找不到token的定义
	abc(3);
	//等同于printf("token3=%d\n", token3);
	//#n对应传入参数3, ##n的定义为合并token和3为token3
	getchar();
	return 0;
}