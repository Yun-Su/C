#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[4] = { 1,2,3,4 };
	int b[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	printf("*a=%d &a=%d  *&a=%d\n", sizeof(*a),sizeof(&a),sizeof(*&a));
	//      4       4      12
	printf("b=%d,&b=%d\n", sizeof(b), sizeof(&b));
	//sizeof(b),Ϊb������������Ԫ�ؼ������Ĵ�С 4x12
	//&b��Ϊȡ��ά����b�ĵ�ַ,ֻ����sizeof(int)�Ĵ�С 4
	printf("*b=%d **b=%d *&b=%d\n",sizeof(*b), sizeof(**b), sizeof(*&b));
	//��������3������,ÿ��������4��Ԫ��
	//sizeof(*b),ȡ��ά�����е������ϵ�����sizeof(**b)�Ĵ�С֮�� 4x4 
	//�ɿ�����int (*p)[4]��ָ��
	//sizeof(**b),ȡһ�������еĵ���Ԫ�صĴ�С 4x1
	//sizeof(*&b),���м���������Ԫ�صĴ�С֮�� 4x3x4 *&b�ɿ�����int (*p)[3][4]��ָ��
	//*&bָ��b�ĵ�ַ��ÿ��Ԫ�ص�ָ��,��С��������֮��
	getchar();
	return 0;
}
