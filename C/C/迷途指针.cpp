#include<stdio.h>
#include<Windows.h>
int main()
{
	int *p = (int *)malloc(sizeof(int) * 10);
	for (int i = 0; i < 10; i++)
	{
		p[i] = i;
		printf("%d\n", p[i]);
	}
	printf("ָ��ĵ�ַΪ%p", p);
	free(p);//ָ������Ӧ���ڴ�ռ��Ѿ����ͷ�
	printf("%p", p);//ָ����Ȼָ���ͷŵ��ڴ��ַ
	//��ʱ��֮Ϊ��;ָ�룬ָ��һƬ�ڴ������������
	p = NULL;
	//ÿʹ����ָ��Ӧ�����ͷ��ڴ棬
	//Ȼ��ָ���ÿ�
	system("pause");
}