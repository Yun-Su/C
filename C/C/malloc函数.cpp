#include<stdio.h>
#include<Windows.h>
int main()
{
	//8λ��һ���ֽڣ�1024���ֽ�Ϊ1kb
	malloc(1024 * 1024 *1024);//malloc�ĺ�������ֵҲ��һ����ָ��
	                          //��ռ����100M���ڴ�
	malloc(50);//malloc����������50���ֽڵ��ڴ�ռ�
	void *p = malloc(20);//voidָ��ָ��һƬ��20���ֽڵ��ڴ�
	                     //void���͵�ָ�����ת��Ϊ�������͵�ָ��
	int *px = (int *)p;//��void���͵�ָ��ǿ��ת��Ϊint����
	                   //����ֵ��*px,
	for (int i = 0; i < 5; i++)//px[i]??????????????????????
	{
		px[i] = i;                  //����20���ֽڵ��ڴ�ռ丳ֵ
		printf("%d\n", px[i]);
	}
	system("pause");

}