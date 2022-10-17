//pointer as functions returns
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

//call by address
int Add(int* a, int* b) {
	printf("Address of a in Add: %d\n", &a);
	printf("value in a of Add (address of a of main) : % d\n", &a);
	printf("Address at address stored in a of Add : %d\n", *a);
	int c = (*a) + (*b);
	return c;

}
//another call by address
int *Add1(int* x, int* y) {//returns pointer to integer
	int z = (*x) + (*y);
	return &z;

}

//call by address in heap
int* Add2(int* x, int* y) {//returns pointer to integer
	int *z = (int*) malloc (sizeof(int));
	*z = (*x) + (*y);
	return z;

}

int main() {

	int a = 2, b = 4;
	printf("Address of a in main: %d\n", &a);
	printf("print Add function: \n");
	int c = Add(&a, &b);
	printf("Sum = %d\n", c);//output= 6

	//If I call function Add1 after Add it won't show the correct 
	//answer since it allocated memory for Add function and cannot
	//write new value. To avoid such mistake we can create our function in heap
	int x = 2, y = 4;
	int* ptr = Add1(&x, &y);
	printf("print Add1 function: \n");
	printf("Sum = %d\n", *ptr);//output= 6


	int* ptr1 = Add2(&x, &y);
	printf("print Add2 function: \n");
	printf("Sum = %d\n", *ptr1);//output= 6

	

	return 0;
}

