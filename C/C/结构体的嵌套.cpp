#include<stdio.h>
#include<stdlib.h>
struct aaa
{
	char c;
	int d;

};
struct bbb
{
	int a;
	char b;
	struct aaa a1;
};
int main()
{
	struct bbb b1;
	b1.a = 10;
	b1.b = 'A';
	b1.a1.c = 'C';
	b1.a1.d = 20;
	printf("b1.a的值为%d\nb1.b的值为%c\nb1.a1.c的值为%c\nb1.a1.d的值为%d\n",
		b1.a, b1.b, b1.a1.c, b1.a1.d);
	getchar();
}