#include <stdio.h>
/**
 * print_binary - prints  binary representation of a number
 * @n: The number to be converted and printed
 *
 * Description: This function prints the binary representation of
 * the input number 'n' without using arrays, malloc, %, or / operators
*/
void print_binary(unsigned long int n)
{
unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
int found_one = 0;

while (mask != 0)
{
if ((n & mask) != 0)
{
found_one = 1;
putchar('1');
}
else if (found_one)
{
putchar('0');
}
mask >>= 1;
}

if (!found_one)
putchar('0');
}
