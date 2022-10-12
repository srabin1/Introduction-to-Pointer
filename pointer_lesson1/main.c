#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main() {
	int a = 10;
	int* p = &a;
	printf("a = %d\n", a);
	*p = 12;//dereferencig and change the variable a
	printf("a = %d\n", a);
	//pointer arithmetic
	printf("Address p is: %d\n", p);
	printf("value at address p is: %d\n", *p);
	printf("size of integer is %d bytes\n", sizeof(int));
	printf("Address p+1 is: %d\n", p + 1);
	printf("value at address p+1 is: %d\n", *p + 1);
	return 0;
}