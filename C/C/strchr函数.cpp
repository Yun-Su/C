#include<stdio.h>
#include<string.h>
int main()
{
	char a[15]="123456789";
	char *b=strchr(a,'5');
	//strchr(a+3,'5')表示从字符第四个元素开始查找  
	//查找字符串中的某个字符， 
	//如果找到返回字符所在的地址（第一次出现的位置），
	//否则返回NULL 
	if(b==NULL)
	{
		printf("没有找到"); 
	}
	else
	{
		printf("找到了，地址为%x,值为%c",b,*b);
	}
}
