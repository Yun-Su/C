#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
int main()
{
	while (1)
	{
		int *p = (int *)malloc(1024 * 1024*100);
		Sleep(1000);
		free(p);//ÿ���ڴ�ֻ���ͷ�һ�Σ�
		        //���ܷ����ͷ�
		int *px = NULL;
		free(px);
		free(px);//��ָ����Է����ͷ�
		Sleep(1000);
	}
	system("pause");
}