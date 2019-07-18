#include<stdio.h>
int main()
{
	//int c;
	//int d;
	float y;
	float z;
	//c = 3, 5;
	//d = (1,5 );
	//printf("%d      %d\n",  c, d);//括号内的数值赋值遵循靠右原则
	y = 7 / 3;
	z = 7 / 3.0;
	printf("%f\n",y);//数值运算结果与数值类型有密切关系，前者为整数类型
	printf("%f\n", z);//后者为实数类型的数值进行运算
	getchar();
	return 0;
}