#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x = (0 ? 4 : 8);//除了0以外，在条件语句中所有数字都代表真值，三步运算（条件？真：假）
	printf("%d\n",x);
	int a = 5, b = 6, c = 7, d = 8;
	int y = a > b ? a : (c > d ? c : d);//判断顺序为，5>6?5:(7>8?7:8) 所以返回值为8    
	printf("%d\n", y);
	printf("%d\n", 2>1? 6 : 7);
	system("pause");
	
}