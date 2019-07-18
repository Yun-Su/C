#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
//设置字符本地化
int main()
{
	wchar_t ch = L'我';
	//L 表示宽字符或者宽字符串
	printf("汉字大小为%d字节\n", sizeof(ch));
	//宽字符字符串占两个字节
	setlocale(LC_ALL, "chs");
	//设置语言本地化，chs 代表 china simply中文简体
	wprintf(L"%c\n", ch);
	//输出宽字符
	wchar_t a[50] = L"苟利国家生死以";
	wprintf(L"%s\n",a);
	getchar();
}