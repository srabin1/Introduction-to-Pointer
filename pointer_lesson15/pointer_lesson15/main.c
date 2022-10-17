//function pointers
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

//instead of declaring a function that would return int* like pointer_lesson 14
//we define a function pass by value, them declare a funcion pointers in main call
int Add(int a, int b)
{
	return a + b;
}

void PrintHello(char * name)
{
	printf("Hello\n");
}

int main() {

	int c, d;

	//pointer to function that should take (int, int) as
	//argument/parameter and return int
	int (*p)(int, int);
	p = &Add;//even if I remove & it works the same.
	c = (*p)(2, 3);//de-referencing and executing the function.
	d = p(2, 3);// this also works same as *p
	printf("%d\n", c);
	printf("%d\n", d);

	/////////////////////
	void(*ptr)(char *);
	ptr = PrintHello;
	ptr("Tom");



	return 0;
}

