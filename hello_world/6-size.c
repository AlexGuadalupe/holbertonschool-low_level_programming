#include <stdio.h>

/**
 *main - main
 *Return: always to 0
*/
int main(void)
{
int a;
long int b;
long long int c;
char d;
float f;

printf("Size of char: %lu byte(s)\n", sizeof(d));
printf("Size an int: %lu byte(s)\n", sizeof(a));
printf("Size of long: %lu byte(s)\n", sizeof(b));
printf("Size of long long: %lu byte(s)\n", sizeof(c));
printf("Size of float: %lu byte(s)\n", sizeof(f));

return (0);
}
