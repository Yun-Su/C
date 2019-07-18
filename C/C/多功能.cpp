#include<stdio.h>
#include<Windows.h>//windows弹窗
int main()
{
	printf("hello.world\n");
	MessageBox(0, "这个是对话框内容", "对话框标题", 0);
	                                  /*参数0为系统级弹出窗口，
										  “对话框内容”，
										  “对话框标题”
										  0为对话框类型*/
	ShellExecute(0, "open", "http://www.moe123.com", 0, 0, 1);//以上
	ShellExecute(0, "open", "D:\\夏之雨硬盘版\\夏之雨\\natsu101_chs.exe", 0, 0, 1);
/*打开某路径下的文件或某网站,注：文件路径需要加入双斜杠，C中默认识别//为/*/
	ShellExecute(0, "open", "notepad", 0, 0, 1);//系统函数不需要注明路径
	getchar();
	return 0;
}