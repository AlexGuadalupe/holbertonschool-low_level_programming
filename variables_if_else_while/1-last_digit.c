#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main- entry point
 *Return: always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
    if (n > 5)
    {
        printf("Last digit of %d and is greater than 5\n", n);
    }
    if (n == 0)
    {
        printf("Last digit of %d and is zero\n", n);
    }
    if (n < 6)
    {
        printf("last digit of %d and is less than 6\n", n);
    }

	return (0);
}
