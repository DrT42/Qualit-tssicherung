#include <stdlib.h>
#include <stdio.h>

void small(int r)
{
	int n = r*4;
	printf("%d\n", n);
}

void big (int r)
{
	int n = r*2;
	printf("%d\n", n);
}

int main(void)
{
    int n = 3000 * 3000;

    int *block = malloc(n * sizeof(int));

    for (int i = 0; i < n / 10; i++) {
         int ri = rand() % n;
         block[ri] = 0;
    }

	for (int i = 0; i<10; i++)
	{
		int r = rand();
		if (r < (RAND_MAX/2))
			small(r);
		else
			big(r);
	}
	free(block);
    return 0;
}
