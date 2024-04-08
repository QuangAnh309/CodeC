#include <stdio.h>
void MultiDim(int A[][3])
{
	printf("\n");
}
int main()
{
// Declare a 2D arrays contains 2 1D arrays, each of 1D array contains 3 elements
	int B[2][3] = {{1,2,3}, {4,5,6}};
	
	// Declare a pointer variable points to the first elements of 2D array
	int(*p)[3] = B; // Pointer to the first 1D array
	
	int* p1 = *B; // *B = &B[0][0] Pointers to B[0][0]. Have a bit different to B
// Declre a 3D array
	int C[3][2][2]={{{1,2}    , {4,5}},
					{{7,8}    , {10,11}},
					{{13,14}  , {16,17}}};
	
	int(*p2)[2][2] = C;// Declare a pointer to a 2D array
					
	printf("%d\n", C);// give us the address of the second 2D arrays
	
	printf("%d\n", *C); //  or C[0] or &C[0][0]. Access to the first 1D array of the first 2D array 
	printf("%d\n", C[0][1]);
	
// MultiDim as a function parameters
	int D[2][3];
	int X[2][4];
	MultiDim(D);// This is still be fine 
	/*MultiDim(X); This will be wrong because the function MultiDim has an parameter 2D arrays with each 1D arrays has 3 elements*/
	
	return 0;
}
