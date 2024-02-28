#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string to convert
 *
 * Return: integer value of string
 */
int _atoi(char *s)
{
int sign = 1;
unsigned int num = 0;
char null_flag = 0;
while (*s)
{
if (*s == '-')
sign *= -1;
if (*s >= '0' && *s <= '9')
{
num = (num * 10) + (*s - '0');
null_flag = 1;
}
else if (null_flag)
break;
s++;
}
return (num * sign);
}
