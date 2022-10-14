/*In this code we learn how to use pointers as function arguments-call by address
we basically define a function do some changes inside that function and want to see
the reflection in our main function as well*/

#include<stdlib.h>
#include<stdio.h>
#include<math.h>

// pass by value
void increment(int a)
{
	a = a + 1;
	printf("a in increment function, pass by vlaue = % d\n", a);//11
}

// pass by address: will save alot of memory
void incrementByAddress(int *a)
{
	*a = *a + 1;
	
}
int main() {
	int a;
	a = 10;
	//pass by value
	increment(a);
	printf("a in main function after pass by vlaue = % d\n", a);//10
	
	//pass by address
	incrementByAddress(&a);
	printf("a in main function after pass by address = %d\n", a);//11
	return 0;
}

