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
    int n = 1000 * 1000;

    int *block = malloc(n * sizeof(int));
	int i;
    for (i = 0; i < n / 10; i++) {
		int ri = rand();
         block[i] = ri;
    }

	//for (i = 0; i<10; i++)
	//{
		//int r = rand()%10;
		//if (i%2)
			//small(r);
		//else
			//big(r);
	//}
	free(block);
    return 0;
}
