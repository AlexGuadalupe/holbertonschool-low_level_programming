#include "main.h"
#include <stdio.h>

/**
 * swap_int- check the code
 *@a: int 
 *@b: int
 * Return: void
 */
void swap_int(int *a, int *b);
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
