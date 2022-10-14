//In this lesson we learn about pointers and multi-dimensional arrays

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main() {
	int A[5] = { 2, 5, 6, 8, 10 };
	int* p = A;// return a pointer to 1-D array 

	printf("print p: %d\n", p);// address of first element

	printf("derefrence *p: %d\n", *p);//value of first element= 2

	printf("derefrence +p+2: %d\n", *p + 2);//4

	//Hint: *p +2 is different from *(p+2); the firs one will add up 2 to *p=2
	//the second one will point to two locations after *p which is 6

	printf("derefrence third items: %d\n", *(p + 2));//6

	//2 dimensional array

	int B[2][3] = { {1,2,3}, {4,5,6} };
	int(*ptr)[3] = B;

	//B[i][j]= *(B[i]+j)= *(*(B+i)+j)

	printf("1. print B: %d\n", B);
	printf("1. print &B[0]: %d\n\n", &B[0]);

	printf("2. print *B: %d\n", *B);
	printf("2. print B[0]: %d\n", B[0]);
	printf("2. print &B[0][0]: %d\n\n", &B[0][0]);

	printf("3. print B+1: %d\n", B + 1);
	printf("3. print &B[1]: %d\n\n", &B[1]);
	
	printf("4. print *(B+1): %d\n", *(B + 1));
	printf("4. print B[1]: % d\n", B[1]);
	printf("4. print &B[1][0]: %d\n\n", &B[1][0]);

	printf("5. print *(B+1)+2: %d\n", *(B + 1) + 2);
	printf("5. print B[1]+2: %d\n", B[1] + 2);
	printf("5. print &B[1][2]: %d\n\n", &B[1][2]);

	printf("6. print *(*B+1): %d\n", *(*B + 1));
	printf("5. print B[1]+2: %d\n", B[1] + 2);
	printf("5. print &B[1][2]: %d\n\n", &B[1][2]);


	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", *(*(B + i) + j));
		}
		printf("\n");
	}



	return 0;
}

