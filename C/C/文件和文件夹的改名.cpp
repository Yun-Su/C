#include<stdio.h>
int main()
{
	char oldname[50] = "D:\\abcd.txt";
	char newname[50] = "D:\\1234.txt";
	//������߲���ͬһ·������ԭ�����ļ�������
	//�����е�"newname"����Ŀ¼
	if (rename(oldname, newname) == 0)
	{
		printf("�ļ������ɹ�\n");
	}
	else
	{
		printf("�ļ�����ʧ��\n");
	}

	char oldfolder[30] = "D:\\360Downloads\\old";
	//�ļ��������� 
	char newfolder[30] = "D:\\new";
	if (rename(oldfolder, newfolder) == 0)
	{
		printf("�ļ����������ɹ�\n");
	}
	else
	{
		printf("�ļ���������ʧ��\n");
	}
	//ͬ��,���"oldfolder"�����ļ�
	
	//�ͻ�һ�����е�"newfolder"��������
	//�ļ�����C�̵�ʱ������������,ԭ��δ֪,Ȩ������???
	getchar();
	return 0;
}