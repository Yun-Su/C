#include<stdio.h>
#include<Windows.h>
int main()
{
	//系统在读入字符串的时候
	//会一直往前读取，直到字符‘\0’处结束

	char str1[10]= "calc";
	//字符数组在初始化时如果初始化元素少于数组个数会自动填充‘\0’
	//读入了\0
	char str2[4] = { 'c','a','l','c' };
	//???????????????
	//只读入了四个字符，没有\0
	char str3[5] = { 'c','a','l','c','\0' };
	//?????????????????????
	//读入了\0
	char str4[5] = { 'c','a','l','c'}; 
	//数组默认未初始化的字符为\0
	system(str1);
	system("pause");

}