#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *pf = fopen("D:\\abc.txt", "r+");
	fseek(pf, 0, SEEK_END);//fseek()����,��ָ���ı���ָ���ƶ����ı�ĩβ
	//fseek(fp,100L,0);��streamָ���ƶ������ļ���ͷ100�ֽڴ���
	//fseek(fp, 100L, 1); ��streamָ���ƶ������ļ���ǰλ��100�ֽڴ���
    //fseek(fp, -100L, 2); ��streamָ���˻ص����ļ���β100�ֽڴ���
	fputs("��������������",pf);
	fclose(pf); 
	getchar();
}