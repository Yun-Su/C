#include<stdio.h>
int main(int argc, char *argv[])
//һ�������,main����û�в���
//int argc,char *argv[]��main�������β�
//argcͳ�ƴ����ָ������ĸ���
{
	printf("%d\n", argc);
	
	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
		//��ִ�г����ʱ��,������Ԥ���� ���� ��� �����ĸ�����
		//������Ϲ����Ժ������һ����ִ�е��ļ�,
		//ִ�г����Ժ�,����ϵͳ�����main����
		//Ȼ��main������ִ��ʱ�����������������ɳ���Ĺ���
		//printf() main�����ڽ��е��õ�ʱ����Ĳ���,Ҳ�����ļ�����λ��
	}
	getchar();
}