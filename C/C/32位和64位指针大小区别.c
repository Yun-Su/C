#include<stdio.h>
#include<Windows.h>
int main()
{
	const double a[5] = { 2.2,3.3,4.4,1.1,5.5 };
	double *px[5] = { &a[0],&a[1],&a[2],&a[3],&a[4] };
	double **p = px;
	printf("ָ��Ĵ�С��%d  %d \n", sizeof(**p), sizeof(int *));
	//64λ����ϵͳ�µ�long/long int/unsigned long int/long double
	//��viod */char */int */long */long long */float */double */
	//����32λ����ϵͳ�µ�2����С
	//ָ����32λϵͳ�¶���4���ֽڴ�С.
	for (p; p < px + 5; p++)
	{
		printf("%f \n", **p);
	}
	getchar();
	return 0;
}