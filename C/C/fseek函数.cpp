#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *pf = fopen("D:\\abc.txt", "r+");
	fseek(pf, 0, SEEK_END);//fseek()函数,将指向文本的指针移动到文本末尾
	//fseek(fp,100L,0);把stream指针移动到离文件开头100字节处；
	//fseek(fp, 100L, 1); 把stream指针移动到离文件当前位置100字节处；
    //fseek(fp, -100L, 2); 把stream指针退回到离文件结尾100字节处。
	fputs("苟利国家生死以",pf);
	fclose(pf); 
	getchar();
}