#include<iostream>
extern int count;
void write_extern(void)
//����write_extern(viod)����,
{
	std::cout << "count is " << count << std::endl;
}