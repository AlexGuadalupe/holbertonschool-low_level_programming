#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/**
 *malloc_checked - allocates memory using malloc
 *@b: unsigned int type
 *Return: to pointer
*
*/

void *malloc_checked(unsigned int b)
{
int *pointer;

pointer = malloc(b);
if (pointer == NULL)
exit(98);
return (pointer);
}
