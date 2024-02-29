#include "main.h"
/**
 * main*_strncpy - copies a string.
 * @dest: string to append by src
 * @src:  string to append by test
 * @n:bytes from src
 * Return: Addres of dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
