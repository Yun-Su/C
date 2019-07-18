#include<stdio.h>
#include<stdlib.h>
int main()
{
    char a[3]={0};//初始化数组为0
    scanf("%[xyz]",a);//字符数组不需要加入‘&’符号 ,只接受x和xy和xyz为开头的输入，其他多余部分将会被忽略 
	//puts(a);用puts函数也可以输出 
	//scanf("%[^xyz\n]",a)//表示不接受xyz或者回车的输入，一但输入就会终止 
	//scanf("%[A-Z]",a)//表示只接受大写字符A到Z的输入 
	printf("%s",a); 
	system("pause"); 
 } 
