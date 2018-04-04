#include <stdlib.h>

int main(void)
{
    int i;

    int n = 1000 * 1000;

    int *block = malloc(n * sizeof(int));

    for (i = 0; i < n / 10; i++) {
         int ri = rand() % n;
         block[ri] = 0;
    }

    return 0;
}
