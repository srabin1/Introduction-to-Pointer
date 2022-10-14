//Character arrays and pointers-part 2

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

void print(const char* C) {
	// by constant keyword we say that, this function only read character and is not allowd to write anything like C[0]= 'A';
	//C[0] = 'A'; giving compilation error
	while (*C != '\0') {
		printf("%c", *C);
		C++;
	}
	printf("\n");
}

int main() {
	char *C ="Hello";// in this representation we don't need to pass the array its size
	print(C);


	return 0;
}

