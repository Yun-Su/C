#include<stdio.h>
int main()
{
	printf("hello.world\n");
	puts("hello.world");//��������ӡ���������Դ����з�Ŷ���Զ�����Ŷ
	putchar('h');//�������char�ͻ���int�����ݣ��������ת���ַ��ͣ�ascll����֮���
	putchar('\n');//�������ת���ַ�
	putchar(97);//�����һ���ַ�a
	putchar('a' - 32);//�����һ���ַ�A
	getchar();
	return 0;
}