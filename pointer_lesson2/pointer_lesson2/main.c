#include<stdlib.h>
#include<stdio.h>
#include<math.h>
//pointer types, void pointer, pointer arithmetic

int main() {
	int a = 1025;
	int* p = &a;
	printf("size of integer is %d\n", sizeof(int));
	printf("Address =%d, value= %d\n", p, *p);
	printf("Address =%d, value= %d\n", p + 1, *p + 1);


	char* p0;
	p0 = (char*)p;//cast type pointer
	printf("size of character is %d\n", sizeof(char));
	printf("Address =%d, value= %d\n", p0, *p0);
	printf("Address =%d, value= %d\n", p0 + 1, *p0 + 1);

	//void pointer- Generic pointer
	//we cannot print value for void pointers
	void* p1;
	p1 = p;
	printf("Address =%d\n", p1);
	return 0;
}
