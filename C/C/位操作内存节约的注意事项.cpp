#include<stdio.h>
#include<stdlib.h>
struct aaa
{
	unsigned int a : 1;
	unsigned char b : 2;
	unsigned char : 3;//������һ��������λ�����޷�ʹ��
	//char c : 9;//����char�������ݵĴ�С���ᱨ��
	//char d : 0;//λ�Ŀ�ȱ������0������ᱨ��
};
int main()
{
	struct aaa *p;
	p = (struct aaa *)malloc(sizeof(struct aaa));
	//printf("%p\n",&(struct aaa));
	//�ṹ��˿̻�û��ɳ�ʼ�����޷��ҵ���ַ��
	p->a = 2;//�����ṹ���޶���С����������
	p->b = 3;
	printf("%d,%d\n", p->a, p->b);
	printf("�ṹ��ĵ�ַλ%p\n", p->a);
	//ȡ��ַֻ�ܾ�ȷ���ֽڣ��޷���ȷ��ĳһλ��
	//�ṹ���Ա��λ��ַ�޷���ȡ��
	getchar();
}