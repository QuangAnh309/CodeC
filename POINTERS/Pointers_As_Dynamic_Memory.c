#include <stdio.h>
#include <stdlib.h>//Using this library if want to use dynamic memory allocation.


int main()
{
// Coming with dynamic memory we need to know about realloc, malloc, calloc and free Function.
	//Malloc()
	int* p;
	p = (int*)malloc(sizeof(int));//Give you a block of four bytes. You need to typecast because malloc() return a VOID POINTER.
		// malloc(Memory allocation) means how many memory you want to allocate in heap by bytes.
	//After we're done using the paricular block we need to deallocate it. Ussing free() function.
	free(p);
	//Create an interger array contains unknown elements with malloc():
	int n;
	scanf("%d", &n);
	int* A = (int*)malloc(n*sizeof(int));
	for(int i=0; i<n; i++){
		A[i] = i+1;
	}
	for(int i=0; i<n; i++){
		printf("%d ", A[i]);
	}
	printf("\n");
	
	//CALLOC()
	int* ptr = (int*)calloc(4,sizeof(int));
	//If you allocate memory through calloc(), calloc() sets aside all bytes positions with value 0.
	/*calloc function also returns a void pointer. But calloc take 2 arguments:
 	 -The first argument is the number of elements of a particular data type.
	 -The second argument is the size of data type.*/
	 
	
	//REALLOC()
	// If you want to change the size of block memory. Realloc also contain 2 arguments:
	/*- The first argument is pointed to the starting address of the existing block.
	  - The second is the size of the new block.*/
	
	// Extend the size of A
	int* B = (int*)realloc(A, 2*n*sizeof(int));
	for(int i=0; i<2*n; i++)
	{
		printf("%d ", B[i]);// The content of previous block is stored in B.
	}
	
	int* C = (int*)realloc(NULL, n*sizeof(int));// Equivalent to malloc.
	return 0;
}
