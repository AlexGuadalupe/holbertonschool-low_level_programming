#include "main.h"
#include <stdio.h>

/**
 * *_strcat - appends the src string to the dest string
 * @dest: string
 * @src: string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
int size = 0, j;

while (dest[size])
{
size++;
}

for (j = 0; j < size + 1 && src[j]; j++)
{
dest[size++] = src[j];
}

return (dest);
}
