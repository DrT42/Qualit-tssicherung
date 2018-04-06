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
    int n = 8000 * 8000;

    int *block = malloc(n * sizeof(int));
	int i;
    for (i = 0; i < n / 10; i++) {
         block[i*100] = 0;
    }

	for (i = 0; i<10; i++)
	{
		int r = rand()%10;
		if (i%2)
			small(r);
		else
			big(r);
	}
	free(block);
    return 0;
}
