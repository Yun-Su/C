#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *pf = fopen("D:\\abc.txt", "r");
	if (pf == NULL)
	{
		printf("打开失败");

	}
	else
	{
		while(!feof(pf))
		{
			char ch = fgetc(pf);
			//fgetc函数在读取当前指针所在位置以后会向后移动一位
			putchar(ch);
		}//运行完以后,pf指针到了文件的末尾.再次打印会显示为空
		char a[100] = { 0 };
		while(fgets(a, 100, pf) != NULL)
		//fgets()函数,每次读一行,遇到换行符例如'\n'就会返回,
			//每次只读取n-1个字符,最后第n个字符赋值'\0'
		//下次再读取的时候会从当前的位置的下个字节开始读取
		{
			printf("%s",a);
		}
		int size = ftell(pf);
		//ftell()函数,返回当前指针位置相对于指针首地址的字节数
		//可以用来计算文件大小,查找文件所在字节数等
		printf("这个文件大小为%d\n", size);
		rewind(pf);//将已经到达文件末尾的指针移动到开头
		getchar();
	}
	fclose(pf);
}