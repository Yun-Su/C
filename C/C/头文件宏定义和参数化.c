#include <stdio.h>
#define MAX(x,y) ((x) > (y) ? (x) : (y))
#define  message_for(a, b)  \
    printf(#a"��jalkjfklajfldjkladal f"#b)
//һ����ͨ��д��һ�������ϡ����������̫����һ���������ɲ��£���ʹ�ú������������\��
//�ں궨���У�����Ҫ��һ����Ĳ���ת��Ϊ�ַ�������ʱ��
//��ʹ���ַ��������������'#'��
int main(void)
{
	message_for(A,B);
	printf("\nMax between 20 and 10 is %d\n", MAX(10, 20));
	getchar();
	return 0;
}