#include<stdio.h>
#include<stdlib.h>
int main()
{
	//char a;
	//a = getchar();//getcahr()�����Ӽ��̶���һ���ַ�������ֵ��a
	//char b = getchar();//getchar()��ѻس�Ҳ����һ���ַ�
	//printf("%d,%d\n",a,b);
	char c, d;
	c = getchar();
	d = getchar();//getchar()����һ��ֻ�ܶ���һ���ַ��������е�ʱ�򣬻�����в����������ַ����룻
	putchar(c);
	putchar(d);
	system("pause");
}