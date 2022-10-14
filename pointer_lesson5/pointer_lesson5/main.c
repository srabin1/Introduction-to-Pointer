/*In this code we learn aobut pointers and arrays*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main() {
	int A[] = {2, 4, 5, 8, 1};
	int* p = A;// or int *p = &A[0];
	p++; //is a valid increment
	//A++ is not a valid increment

	printf("A is: %d\n", A); //will print the address of first element: &A[0]
	printf("&A[0] is:%d\n", &A[0]); //&A[0]
	printf("A[0] is:%d\n", A[0]); //2
	printf("*A is:%d\n", *A); //2

	for (int i = 0; i < 5; i++) {
		printf("Address = %d\n", &A[i]);
		printf("Address = %d\n", A+i);
		printf("value = %d\n", A[i]);
		printf("value = %d\n", *(A+i));
	}

	return 0;
}

