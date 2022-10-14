//pointer and dynamic allocation on heap

#include<stdlib.h>
#include<stdio.h>


int main() {
	int a;//local variabl on main goes on stack
	int* p;//local pointer variable on main which stores address of block of memory in heap
	p = (int*)malloc(sizeof(int));
	*p = 10;
	//we must release space on heap
	free(p);
	p = (int*)malloc(20*sizeof(int));//20 will show the size for an integer array
	


	
	return 0;
}


/*C++ version of dynamic allocation memory
	* int a;
	* int *p;
	* p = new int; //allocate integer
	* *p = 10;
	* delete p;
	* p =new int [20];// allocate array
	* delete []p;//free array
	*/
