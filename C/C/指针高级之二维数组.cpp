#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[4] = { 1,2,3,4 };
	int b[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	printf("*a=%d &a=%d  *&a=%d\n", sizeof(*a),sizeof(&a),sizeof(*&a));
	//      4       4      12
	printf("b=%d,&b=%d\n", sizeof(b), sizeof(&b));
	//sizeof(b),为b整个数组所有元素加起来的大小 4x12
	//&b意为取二维数组b的地址,只能是sizeof(int)的大小 4
	printf("*b=%d **b=%d *&b=%d\n",sizeof(*b), sizeof(**b), sizeof(*&b));
	//本例中有3个集合,每个集合有4个元素
	//sizeof(*b),取二维数组中单个集合得所有sizeof(**b)的大小之和 4x4 
	//可看作是int (*p)[4]的指针
	//sizeof(**b),取一个集合中的单个元素的大小 4x1
	//sizeof(*&b),所有集合中所有元素的大小之和 4x3x4 *&b可看作是int (*p)[3][4]的指针
	//*&b指向b的地址里每个元素的指针,大小等于他们之和
	getchar();
	return 0;
}
