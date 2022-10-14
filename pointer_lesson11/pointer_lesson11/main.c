//pointers and static allocation on memory

#include<stdlib.h>
#include<stdio.h>
#include<math.h>

//global variable: can be defined if it is needed
//by different functions or even main o.w. it is waste 
//of space for memory to keep that variable
int total;
//This explain how stack uses functions recursively from
//the top to bottom and will put a hold on bellow functions on stack
int Square(int x)
{
	return x * x;
}
int SquareOfSum(int x, int y) 
{
	int z = Square(x + y);
	return z;
}
int main() 
{
	int a = 4, b = 8;
	total = SquareOfSum(a, b);
	printf("output =%d", total);

	return 0;
}

