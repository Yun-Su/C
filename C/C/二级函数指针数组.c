#include<stdio.h>
int jiaA(int x, int y)
{
	return x + y;
}
int jianB(int x, int y)
{
	return x - y;
}
void change(int(*p) (int x, int y))
{
	//�����и������ƣ��½�һ����������ָ��P��ֵ
	p = jianB;
	printf("change�ĵ�ַ%p\n", &p);
}
void changeA(int(**px)(int x, int y))
{
	*px = jianB;
}
int main()
{
	int(*p)(int x, int y) =jiaA;
	printf("%d\n", p(7,8));
	printf("       jiaA=%p\n",&p);
	change(p);//�����и������ƣ�
	printf("%d\n", p(7, 8));//p()Ϊ��������֮���ֵ����ַ��change��p����һ��
	changeA(&p);
	//����һ������ָ���ַ���޸ĳɹ�
	printf("%d\n", p(7, 8));
	getchar();
	return 0;
}