#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - acces point
*description: prints num 0 to 9 (putchar)
*Return: always (0)
*/
int main(void)
{
int n;
for (n = 0; n <= 9; n++)
putchar(n + '0');
putchar('\n');
return (0);
}
