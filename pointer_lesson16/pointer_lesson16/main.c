//Function pointers and callbacks
#include<stdlib.h>
#include<stdio.h>

void A()
{
	printf("Hello\n");
}

void B(void (*ptr)())//function pointer as argument
{
	ptr();//call-back function that "ptr" points to 
}
//Why void pointers? void pointers are generic pointer and
//we can type cast them into any typeof pointers
 

//explanation: B is a function which takes another function
//since A is a function and name of a function is a pointer type
//we can simply pass A into B like: B(A)


int main() {
	void (*p)() = A;
	B(p);
	//or simply
	B(A);// A is a callback function

	
	return 0;
}

