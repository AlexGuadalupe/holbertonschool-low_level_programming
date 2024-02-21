#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - acces point
*description: print lowercase alphabet n reverse (putchar)
*Return: always (0)
*/
int main(void)
{
int n;
for (n = 'z'; n >= 'a'; n--)
putchar(n);
putchar('\n');
return (0);
}
