#include<stdio.h>
#include<Windows.h>
void Amsg(char * cde)//cde只是给被传递的参数起名而已
{
	MessageBoxA(0,"23333",cde,0);
}
void Bmsg(char * abc)
{
	printf("%s",abc);
}
int main()
{
	void (*p)(char * efg);//随便起名字
	//(char * efg)?????????????????????
	p = Amsg;
//	p = Bmsg;
	while (1)
	{
		p("gogogo");
		printf("\n");
		Sleep(2000);
	}
	system("pause");
}