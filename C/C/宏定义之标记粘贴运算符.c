//�궨���ڵı��ճ���������##����ϲ�����������
//�������ں궨�������������ı�Ǳ��ϲ�Ϊһ����ǡ�
#include <stdio.h>
#define abc(n) printf("token"#n"=%d",token##n)
int main(void)
{
	int token3=1234;
	//����һ���������ڴ���,������abc()�������Ҳ���token�Ķ���
	abc(3);
	//��ͬ��printf("token3=%d\n", token3);
	//#n��Ӧ�������3, ##n�Ķ���Ϊ�ϲ�token��3Ϊtoken3
	getchar();
	return 0;
}