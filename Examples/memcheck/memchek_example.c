#include <stdlib.h>

// This example is copied from valgrind.org/docs/manual/quick-start.html

void foo(void)
{
	int* x = malloc (10*sizeof(int));
	int y;
	for(int i=0;i<=10;i++) //problem 3: heap block ovverrun.
	{
		y = x[i-1]; 			//problem 1 : read from not allocated memory
		x[i]= y*x[i];  	//problem 2 : read from uninitialised memory.
	}
}			// problem 4 : memory leak -- x not freed

int main(void)
{
	foo();
	return 0;
}
