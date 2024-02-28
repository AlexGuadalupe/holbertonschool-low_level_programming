#include "main.h"
#include <stdio.h>

/**
 * _strcpy - a funtion that takes a pointer to an int as paramater and
 * @dest: chaine of character
 * @src: chaine character
 *
 * Return: dest
*/
char *_strcpy(char *dest, char *src)
{
int len, i;
len = 0;
while (src[len] != '\0')
{
len++;
}
for (i = 0; i < len; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
