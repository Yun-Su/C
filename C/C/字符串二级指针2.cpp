#include<stdio.h>
#include<Windows.h>
void task(char **pc)
{
	*pc =*pc+2;
	//?????????????????
	char **px=pc;
	system(*px);
}
int main()
{
	char a[20] = "wotasklist";
	char *pa=a;
	task(&pa);
//	system(pa+2);
	system("pause");
}