#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main- main
 *Return: always to (0)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/** printf("The number is: %d\n", n);
	 */
	return (0);
}
