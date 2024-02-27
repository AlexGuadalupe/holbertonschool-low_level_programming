#include "main.h"

/**
* _puts- print a string, followes by a new line, to stdout
* @str: parameter
* Return: void
*/

void _puts(char *str)
{
	while(*str != ('\0'))
	{
	_putchar(*str);
	str++;
	}
	_putchar('\n');
}
