#include<stdio.h>
#include<stdlib.h>
#include<io.h>
int main()
{
	printf("%d", _access("C:\\1", 0));//access�����ж��ļ����Ƿ����,-1Ϊ�����ڣ�0Ϊ����
	if ((_access("C:\\1",0))==0)
	{
		printf("�ļ�����\n");
	}
	else if((_access("C:\\1",0))==-1)
	{
		printf("�ļ�û�ҵ�\n");
	}
	else
	{
		printf("��֪����\n");
	}
	getchar();
	return 0;   
}