#include <stdlib.h>
#include <limits.h>


void foo(void)
{
	int* x = malloc (10*sizeof(int));
	int y;
	for(int i=0;i<=10;i++) 
	{
		y = x[i-1]; 			//problem 1 : read from not allocated memory
		x[i]= y*2;  			//problem 2: heap block ovverrun.
	}

}								// problem 3 : memory leak -- x not freed

int main(void)
{
	foo();
	return 0;
}
