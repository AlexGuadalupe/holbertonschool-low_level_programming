#include "main.h"
/**
 * *_strncat - appends src to the dest string
 *@n:bytes from src
 *@dest:string to apppend by src
 *@src: string to append by test
 *
 * Return: addres of dest
*/
char *_strncat(char *dest, char *src, int n)
{
char *start = dest;
while (*dest != '\0')
{
dest++;
}
while (*src != '\0' && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}
*dest = '\0';
return (start);
}
