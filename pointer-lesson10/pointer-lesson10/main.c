//pinters and 3 dimensional arrays
#include<stdlib.h>
#include<stdio.h>

void func(int *A) {// or A[]
	
}
void func2(int (*B)[3]) {//or B[][3]

}

void func3(int (*C)[2][2]){//or C[][2][2]

}
int main() {
	int C[3][2][2] = { {{2, 5},{7, 9}},
						{{3, 4},{6, 1}},
						{{0, 8},{11, 13}}};// returns pointer to int(*) [2] [2]

	int B[2][3] = { {2,4,6}, {5, 7, 9} };// returns pointer to int (*) [3]
	int A[2] = { 1,2 };// returns pointer to int*

	//They all are pointing to the same thing

	printf("C: %d\n", C);
	printf("*C: %d\n", *C);
	printf("C[0]: %d\n", C[0]);
	printf("&C[0][0]: %d\n", &C[0][0]);
	printf("*(C[0][0]+1): %d\n", *(C[0][0] + 1));

	func(A);
	 
	return 0;
}

