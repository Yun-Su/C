#include<stdio.h>//å≈±¨¡À2333
#include<stdlib.h>
#include<Windows.h>
int main()
{
	int a,x,y,z;//x*100+y*10+z==x*x*x+y*y*y+z*z*z
	for (a=100; a <= 999; a++)
	{
		x = a / 100;
		y = (a % 100) / 10;
		z = (a % 100) % 10;
		int i = ((x * 100) + (y * 10) + z) == (x*x*x + y*y*y + z*z*z);
		if (i)
		{
			printf("%d\n", a);
		}
		//printf("%d\n", a);
	}
	system("pause");
}