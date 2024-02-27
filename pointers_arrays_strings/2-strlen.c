#include "main.h"
#include <stdio.h>

/**
* _strlen- entry point
* @s:function that returns the length of a string.
* Return: int
*/

int _strlen(char *s)
{
	int i = 0;

while (s[i] != '\0')
i++;
return (i);
}
