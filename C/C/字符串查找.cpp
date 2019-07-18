#include <stdio.h>
#include <string.h>
int main(void)
{
   char *a= "abcdefghijk";
   char *b= "cde"; 
   char *c;
   c=strstr(a,b);
   printf("%p\n",a);
   //字符串查找，
   //在字符串a中查找字符串b
   //看是否匹配
   //匹配会返回所在字符对应的地址，
   //否则会返回NULL
   if(c==NULL)
   {
   	printf("没有找到"); 
	} 
	else if(c!=NULL)
	{
		printf("找到了\n");
		printf("%p\n",c);
	 }  
}

 
