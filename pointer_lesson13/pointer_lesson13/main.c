/* 3 functions to allocate memory on heap and 1 function to deallocate
* 1. malloac: void * malloc(size_t size), size_t is unsigned int
or int *p = (int *) malloc (3* sizeof(int));

2. calloc: void * calloc (size_t num, size_t size)
calloc takes two parameters
or int *p = (int *) calloc (3, sizeof(int))

3. realloc: void * realloc (void* ptr, size_t size)
*/

#include<stdlib.h>
#include<stdio.h>


int main() {
	int n , m;
	//malloc
	printf("Enter size of array to test malloc function:\n");
	scanf_s("%d", &n);
	//int A[n]; this is not correct and we need to know size of the array in static declaration from the begining
	int* A = (int*)malloc(n * sizeof(int));//dynamically allocated array
	for (int i = 0; i < n; i++)
	{
		A[i] = i + 1;
	}
	
	for (int i = 0; i < n; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");
	//free(A); don't forget to relaese allocation
	//A = NULL;

	//calloc
	printf("Enter size of array to test calloc function:\n");
	scanf_s("%d", &m);
	int* B = (int*)calloc(m , sizeof(int));
	for (int i = 0; i < m; i++)
	{
		B[i] = i + 1;
	}
	for (int i = 0; i < m; i++)
	{
		printf("%d ", B[i]);
	}

	//realloc

	int n1;
	printf("Enter size of array to test realloc function:\n");
	scanf_s("%d", &n1);
	int* C = (int*)malloc(n1 * sizeof(int));
	for (int i = 0; i < n1; i++)
	{
		C[i] = i + 1;
	}
	int* D = (int*)realloc(A, 2*n1 * sizeof(int));
	printf("previous block address = %d, new address = %d\n", C, D);
	for (int i = 0; i < 2*n1; i++)
	{
		printf("%d ", D[i]);
	}
	printf("\n");

	//int* D = (int*)realloc(NULL, n1 * sizeof(int)); this is equivalent to malloc
	return 0;
}

