#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int num;
	char a[20]="����1000Ԫ";
	sscanf(a,"����%dԪ",&num); 
	printf("%d",num);
}
