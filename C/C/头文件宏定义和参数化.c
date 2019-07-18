#include <stdio.h>
#define MAX(x,y) ((x) > (y) ? (x) : (y))
#define  message_for(a, b)  \
    printf(#a"和jalkjfklajfldjkladal f"#b)
//一个宏通常写在一个单行上。但是如果宏太长，一个单行容纳不下，则使用宏延续运算符（\）
//在宏定义中，当需要把一个宏的参数转换为字符串常量时，
//则使用字符串常量化运算符'#'。
int main(void)
{
	message_for(A,B);
	printf("\nMax between 20 and 10 is %d\n", MAX(10, 20));
	getchar();
	return 0;
}