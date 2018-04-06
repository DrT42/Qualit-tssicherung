#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int n = 1000 * 1000;

    int *block = malloc(n * sizeof(int));
	int i;
    for (i = 0; i < n / 10; i++) {
         int ri = rand() % n;
         block[ri] = ri;
    }
    
	free(block);
    return 0;
}
