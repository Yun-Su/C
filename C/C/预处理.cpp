#define Max233 15
//定义Max233的值为15
#undef Max233
#define Max233 25
//取消已定义的Max233,然后定义为25
#include "头文件定义.h"
//告诉cpp从本地目录中获取 自定义的头文件并添加到当前文件中
#ifndef max123
#define max123 345
#endif 
//告诉cpp当max123未定义的时候,将max123定义为345
#define  message_for(a, b)  \
    printf(#a " and " #b ": We love you!\n")
//宏定义一行写不下的时候 加个 '\'来延续

#define f(n) printf("y"#n"=%d",y##n)
//
//宏定义内的标记粘贴运算符
int main()
{
    int y5 = 128;
    f(5);
    //其实是f(5)替换为printf("y5=%d",y5);
}