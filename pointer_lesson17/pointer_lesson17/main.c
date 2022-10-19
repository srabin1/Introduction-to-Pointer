//Function pointers and callbacks: example with the help of sort algorithm

#include<stdlib.h>// we can use q sort from this library
#include<stdio.h>


/*To avoid repetetion for writing an increasing or decreasing bubble sort
we use flag. for flag since our focus is on comparision A[j] < or > A[j + 1] part
we define a call back function like int (*compare) (int, int)*/


int compare(int a, int b)
{
	if (a > b)
		return -1;// or return 1;
	else
		return 1;//return 1;

}
int absolute_compare(int a, int b)
{
	if (abs(a) > abs(b))
		return 1;
	else
		return -1;

}

int compare2(const void* a, const void* b) {

	int A = *((int*)a);//typecasting to int* and getting value
	int B = *((int*)b);
	return A - B;
}
//sort in increasing order
void BubbleSort(int* A, int n) // or A[] but array by itself is an address
{
	int i, j, temp;
	for (i = 0; i < n; i++)
		for (j = 0; j < n - 1; j++) {
			if (A[j] > A[j + 1]) {
				temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
			}
		}
}

//sort in decreasing order
void BubbleSortD(int* A, int n) // or A[] but array by itself is an address
{
	int i, j, temp;
	for (i = 0; i < n; i++)
		for (j = 0; j < n - 1; j++) {
			if (A[j] < A[j + 1]) {
				temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
			}
		}
}

//callback function should compare two integers, should return 1 
//if first element has higher rank, 0 if elements are equal and -1
//if second elemnt has higher rank.
void BubbleSortFlag(int* A, int n, int (*compare)(int, int))
{
	int i, j, temp;
	for (i = 0; i < n; i++)
		for (j = 0; j < n - 1; j++) {
			if (compare(A[j], A[j + 1]) > 0) {
				temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
			}
		}
}



int main() {
	int A[] = { 3, 2, 1, 5, 6, 4 };
	int B[] = { -31, 22, -1, 50, -6, 4 };
	int i;

	printf("Bubble sort flag:\n");
	BubbleSortFlag(A, 6, compare);
	for (i = 0; i < 6; i++)
		printf("%d ", A[i]);
	printf("\n");

	printf("Bubble sort increasing:\n");
	BubbleSort(A, 6);
	for (i = 0; i < 6; i++)
		printf("%d ", A[i]);
	printf("\n");

	printf("Bubble sort flag absolute value:\n");
	BubbleSortFlag(B, 6, absolute_compare);
	for (i = 0; i < 6; i++)
		printf("%d ", B[i]);
	printf("\n");

	printf("Bubble sort decreasing:\n");
	//to run BubbleSortD, comment out BubbleSort vecause they can't pass if condition
	BubbleSortD(A, 6);
	for (i = 0; i < 6; i++)
		printf("%d ", A[i]);
	printf("\n");

	printf("Quick sort from stdlib library:\n");
	qsort(B, 6, sizeof(int), compare2);
	for (i = 0; i < 6; i++)
		printf("%d ", B[i]);
	printf("\n");

	return 0;
}

