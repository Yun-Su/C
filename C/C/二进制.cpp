#include<stdio.h>
int main()
{
	int i, n, k, x[10];
	scanf_s("%d", &n);
	for (i = 0; n != 0; i++)// �ж����� n!=0
	{
		x[i] = n % 2;
		n = n / 2;
	}
	for (k = i - 1; k != (-1); k--)// �ж����� k!=-1
		printf("%d", x[k]);// ���x[k]������x[i]
	getchar();
	getchar();
	return 0;
}