#include "main.h"
#include <stdlib.h>

/**
 * create_array - point to print
 * @c: the address of memory to print
 * @size: the size of the memory to print
 * Return: Null.
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *r;
r = malloc(sizeof(c));

if (size == 0)
{
return (NULL);
}

for (i = 0; i < size; i++)
{
r[i] = c;
return (r);
}
return (NULL);
}
