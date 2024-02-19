#include <stdio.h>
/**
 *main- main
 *Return: always to 0
*/
int main(void)
{
char d;
int a;
long int b;
long long int c;
float f;

printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size an int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
