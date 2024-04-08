#include <stdio.h>
#include <stdlib.h>

int *Add(int* a, int* b)	//this function returns pointers to intergers ( Address of c ).
{
	int* c = (int*)malloc(sizeof(int));//make a block memory in heap.
	(*c) = (*a) + (*b);
	return c;// We return the address malloc() returned us and we're safe now becoz we return the address from heap.
}

int main(){
	int x = 8;
	int y = 7;
	int* ptr = Add(&x, &y);	//x and y are local variables to Main.
	printf("%d ", *ptr);
	return 0;
}
