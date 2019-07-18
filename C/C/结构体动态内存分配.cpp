#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct aaa
{
	int a;
	char b;
	char c[30];
};
int main()
{
	struct aaa *p = (struct aaa *)malloc(sizeof(struct aaa)*10);
	//for (int i = 0; i<10;i++)
	//{
	//	(p + i)->a = i+1;
	//	(p + i)->b =97+i;
	//	sprintf_s((p + i)->c, "asdfgjkl");
	//	printf("%d,%c,%s\n", (p + i)->a, (p + i)->b, (p + i)->c);
	//???????????????????????????
	//}


	//for (int i = 0; i < 10; i++)
	//{
	//	p[i].a = i + 1;
	//	p[i].b = 97 + i;
	//	sprintf_s(p[i].c, "asdfghjkl");
	//	printf("%d,%c,%s\n", p[i].a, p[i].b, p[i].c);
	//	//??????????????????
	//}
	getchar();
}