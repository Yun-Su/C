#include<stdio.h>
#include<stdlib.h>
int main()
{
   //char c=getchar();
   //putchar(c);
   //system("pause");
   char a[10];
   gets_s(a);//gets函数用来读入字符串， 
   //system(a);//此处不用打"  " 来标注 
   puts(a);//puts函数，轻量级printf函数，可以自动换行； 
}
