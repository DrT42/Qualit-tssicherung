#include <stdlib.h>
#include <limits.h>

void foo(void)
{
	int* x = malloc (10*sizeof(int));
	int y;
	for(int i=0;i<=10;i++) 
	{
		y = x[i-1]; 		//p1 : read from not allocated memory
		x[i]= y*2;  		//p2: heap block ovverrun.
	}

}							// p3 : memory leak -- x not freed

int main(void)
{
	foo();
	return 0;
}
