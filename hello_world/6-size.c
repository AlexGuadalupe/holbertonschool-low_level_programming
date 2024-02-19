#include <stdio.h>
/**
 *main- main
 *Return: always to 0
*/
int main(void)
{
int a;
long int b;
long long int c;
char d;
float f;

printf("Size of char: %d byte(s)\n", sizeof(d));
printf("Size an int: %d byte(s)\n", sizeof(a));
printf("Size of long int: %d byte(s)\n", sizeof(b));
printf("Size of long long int: %d byte(s)\n", sizeof(c));
printf("Size of float: %d byte(s)\n", sizeof(f));

return (0);
}
