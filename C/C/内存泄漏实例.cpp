#include<stdio.h>
#include<Windows.h>
int main()
{
	for (int i = 0; i <3; i++)
	{
		int *p = (int *)malloc(1024 * 1024 * 100);
		//�ڴ���ʹ�����Ժ�û�м�ʱ�ͷš�free(p);���ͻ���ɷ��������ڴ�
		//���²���ϵͳ�������׳��ڴ�й©
		Sleep(3000);
	}
	int *px = (int *)malloc(1024 * 1024 * 100);
	//���������������������ڴ�й©
	int *px =NULL;//���ָ���ַ���ı䣬����ָ����ʧ�ˡ�
	free(px);//�ͷŵ��ڴ���NULL�����ַ���ڴ�
	//ԭ��ַ���ڴ沢û�б��ͷ�
	system("pause");
}