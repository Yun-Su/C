#include<stdio.h>	
#define DB double
typedef double db;
#define DBX double *//define 是替换	
typedef double* dbx;//typedef是给函数名称起别名
int main()
{
	DB d1 = 1.2, d2 = 2.4;
	db d3 = 3.6, d4 = 4.8;
	printf("d1=%d,d2=%d\n", sizeof(d1), sizeof(d2));
	printf("d3=%d,d4=%d\n", sizeof(d3), sizeof(d4));
	DBX dp1, dp2;//define 为替换double *为 DBX
	//此处在进行赋值的时候实际上是，double * dp1; double dp2;
	double **pp = NULL;
	pp = dp1;//pp=dp2会报错;说明dp2为double常量
	dbx dp3, dp4;
	printf("dp1=%d,dp2=%d\n", sizeof(dp1), sizeof(dp2));
	printf("dp3=%d,dp4=%d\n", sizeof(dp3), sizeof(dp4));
	getchar();
	return 0;
}