#include<stdio.h>
#include<stdlib.h>
int main()
{
    char a[3]={0};//��ʼ������Ϊ0
    scanf("%[xyz]",a);//�ַ����鲻��Ҫ���롮&������ ,ֻ����x��xy��xyzΪ��ͷ�����룬�������ಿ�ֽ��ᱻ���� 
	//puts(a);��puts����Ҳ������� 
	//scanf("%[^xyz\n]",a)//��ʾ������xyz���߻س������룬һ������ͻ���ֹ 
	//scanf("%[A-Z]",a)//��ʾֻ���ܴ�д�ַ�A��Z������ 
	printf("%s",a); 
	system("pause"); 
 } 
