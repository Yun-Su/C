#include<stdio.h>	
#define DB double
typedef double db;
#define DBX double *//define ���滻	
typedef double* dbx;//typedef�Ǹ��������������
int main()
{
	DB d1 = 1.2, d2 = 2.4;
	db d3 = 3.6, d4 = 4.8;
	printf("d1=%d,d2=%d\n", sizeof(d1), sizeof(d2));
	printf("d3=%d,d4=%d\n", sizeof(d3), sizeof(d4));
	DBX dp1, dp2;//define Ϊ�滻double *Ϊ DBX
	//�˴��ڽ��и�ֵ��ʱ��ʵ�����ǣ�double * dp1; double dp2;
	double **pp = NULL;
	pp = dp1;//pp=dp2�ᱨ��;˵��dp2Ϊdouble����
	dbx dp3, dp4;
	printf("dp1=%d,dp2=%d\n", sizeof(dp1), sizeof(dp2));
	printf("dp3=%d,dp4=%d\n", sizeof(dp3), sizeof(dp4));
	getchar();
	return 0;
}