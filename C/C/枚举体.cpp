#include<stdio.h>
#include<stdlib.h>
enum aaa
//枚举体,意义在于限定作用范围
{
	ab,cd,ef,gh=12,ij
};
int main()
{
	enum aaa a1 = ab;
	//enum aaa a2=g;会报错，因为不在枚举体范围内
	printf("%d\n",a1);
	//枚举体如果没有初始化默认从0开始排序每次加1
	enum aaa a2 = gh;
	printf("%d\n", a2);
	//改变了枚举体成员gh的值
	//后面的值也会改变

	getchar();
}