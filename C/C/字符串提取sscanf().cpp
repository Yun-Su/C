#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int num;
	char a[20]="我有1000元";
	sscanf(a,"我有%d元",&num); 
	printf("%d",num);
}
