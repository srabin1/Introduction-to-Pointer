/*In this lesson we learn about character arrays and pointer-Part 1*/
/*Character arrays are nothing but strings*/

/*how to store strings-> the character array should be large enough;
size of array >= # of characters in string +1 (that one specifies the
last character which is the null character)*/
#include<stdlib.h>
#include<stdio.h>
#include<string.h>// to call strings functions

//representation #1
void print(char* C) {
	int i = 0;
	//since we don't know size of the array we
	//continue to read characters utile we meet null character
	while (*(C+i) != '\0')
	{
		printf("%c", *(C + i));
		i++;
	}
	printf("\n");
}

//representation #2
void print1(char* C) {
	int i = 0;
	while (C[i] != '\0')
	{
		printf("%c", C[i]);
		i++;
	}
	printf("\n");
}
//representation #3
//this also works since pointer is pointing to 
//the first element and then we simply increment it
void print2(char* C) {
	int i = 0;
	while (*C != '\0')
	{
		printf("%c", *C);
		C++;
	}
	printf("\n");
}

int main() {


	char C[20] ;
	C[0] = 'J';
	C[1] = 'O';
	C[2] = 'H';
	C[3] = 'N';
	// we should include the null character to obtain the correct output and size of C is 4+1
	C[4] = '\0';
	printf("%s\n", C);
		
	int len = strlen(C);
	printf("length = %d\n", len);// length of the array is 4 while we include null character
	printf("Size of C in bytes: %d\n", sizeof(C));// 20, since we gave 20 to array
	//another representation
	char D[] = "SANAZ";// or char C[20]= "SANAZ"
	printf("Size of D in bytes: %d\n", sizeof(D));// 6 =5+1 since we didn't define size 

	//third representation
	char E[5] = { 'J', 'O', 'H', 'N', '\0'};
	printf("Size of E in bytes: %d\n", sizeof(E));// 5=4+1


	//Arrays and pointers are different types that are used in similar manner
	char c1[6] = "Hello";
	char* c2;
	c2 = c1;// but c1= c2 is not valid
	printf("print c2[1]: %c\n", c2[1]);
	printf("print c1[1]: %c\n", c1[1]);
	c2[0] = 'A';
		for (int i = 0; i < strlen(c1); i++) {
			printf("%c", *(c1 + i));
	}
		printf("\n");
		
	//Arrays are always passed to functions by address
		char A[20] = "Hello";
		print(A);
		print1(A);
		print2(A);
		
	return 0;
}

