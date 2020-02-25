#include <stdio.h>
#include <stdarg.h>
double average(int num, ...)
{
    va_list valist;
    //va_list保有 va_start va_arg va_end及va_copy所需信息
    
    double sum = 0.0;
    va_start(valist, num);
    /* 为 num 个参数初始化 valist */
    //va_start令函数得以访问可变参数
    /* 访问所有赋给 valist 的参数 */
    for (int i = 0; i < num; i++)
    {
        sum += va_arg(valist, int);
        //va_arg访问下一个函数可变参数
    }
    va_end(valist);
    /* 清理为 valist 保留的内存 */
    //va_end结束函数可变参数的行程
    return sum / num;
}
int main()
{
    printf("Average of 2, 3, 4, 5 = %f\n", average(4, 2, 3, 4, 5));
    printf("Average of 5, 10, 15 = %f\n", average(3, 5, 10, 15));
}