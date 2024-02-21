#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - acces point
*description: print lllthe numbers of base 16 in lowercase (putchar)
*Return: always (0)
*/
int main(void)
{
int c;
char n;

for (c = 0 ; c <= 9; c++)
putchar(c + '0');
for (n = 'a' ; n <= 'f' ; n++)
putchar(n);
putchar('\n');
return (0);
}
