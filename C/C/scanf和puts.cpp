#include<stdio.h>
#include<stdlib.h>
int main()
{
//	char a[100];
//	char b[100];	
	char c[100];
	char d[100]; 
//	scanf("%s%s",a,b);
//  会将空格识别为分隔符 
//	printf("%s,%s",a,b);
	
	gets(c);
	gets(d);
	puts(c);
	puts(d); 
	//输出后会自动换行 
	getchar();
}
