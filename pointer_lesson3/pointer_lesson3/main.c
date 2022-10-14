#include<stdlib.h>
#include<stdio.h>
#include<math.h>
//pointer to pointer


int main() {
	int x = 5;
	int* p;
	p = &x;   //p is of type pointer to integer
	*p = 6;  //derefrencing p will change the vlaue of x
	int** q;
	q = &p;  //q is of type pointer to pointer
	int*** r;
	r = &q;  //r is of type pointer to pointer pointer


	printf("print *p: %d\n", *p);//6
	printf("print *q: %d\n", (* q));//address of p
	printf("print **q: %d\n", **q);//6
	printf("print q: %d\n", &p);// address of p
	printf("print **r: %d\n", **r);//address of q
	printf("print ***r: %d\n", ***r);//6
	***r = 10;
	printf("x = %d\n", x);  //10
	return 0;
}

