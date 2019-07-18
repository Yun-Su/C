#include<stdio.h>
#include<Windows.h>
int main()
{
	const double a[5] = { 2.2,3.3,4.4,1.1,5.5 };
	double *px[5] = { &a[0],&a[1],&a[2],&a[3],&a[4] };
	double **p = px;
	printf("指针的大小是%d  %d \n", sizeof(**p), sizeof(int *));
	//64位操作系统下的long/long int/unsigned long int/long double
	//和viod */char */int */long */long long */float */double */
	//都是32位操作系统下的2倍大小
	//指针在32位系统下都是4个字节大小.
	for (p; p < px + 5; p++)
	{
		printf("%f \n", **p);
	}
	getchar();
	return 0;
}