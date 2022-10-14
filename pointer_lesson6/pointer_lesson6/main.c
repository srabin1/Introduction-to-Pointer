/*in this code we learn aobut arrays as function arguments*/
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int SumOfElements(int A[],int size) {

	int i, sum = 0;

	for (i = 0; i < size; i++)
	{
		sum += A[i];

	}
	return sum;
}

int SumOfElements2(int A[]) {

	int i, sum2 = 0;
	int arrayLength = sizeof(A) / sizeof(A[0]);
	for (i = 0; i < arrayLength; i++)
	{
		sum2 += A[i];

	}
	return sum2;
}


int SumOfElements3(int *A, int size) {

	int i, sum2 = 0;
	
	for (i = 0; i < size; i++)
	{
		sum2 += A[i];// A[i] is *(A+i)

	}
	return sum2;
}

void DoubleArray(int* A, int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		A[i] = 2*A[i];// A[i] is *(A+i)

	}
	printf("double array is: ");
	for (i = 0; i < size; i++)
	{
		printf("%d ", *(A + i));

	}
	// we can either print our double array here or in the main function

}


int main() {

	int A[] = { 1,2,3,4,5 };
	int size = sizeof(A) / sizeof(A[0]);
	int total = SumOfElements(A, size);// when we pass an array to a function in main we remove []
	printf("Sum of elements = %d\n", total);//output = 15


	int total2 = SumOfElements2(A);
	printf("Sum of elements2 = %d\n", total2);//output = 3; that is an error
	//when compiler see the function pass an array it won't copy an entire
	//array and only create a pointer to an array and allocate that 
	//pointer to the provided spot
	//to avoid such error always pass an array as address

	int total3 = SumOfElements3(A, size);
	printf("Sum of elements3 = %d\n", total3);//output = 15;
	DoubleArray(A, size);
	
	
	
	
	return 0;
}

