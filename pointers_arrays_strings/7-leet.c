#include "main.h"
/**
 *cap_string - capitalizes every wordof a string
 * @s: string to modify
 * Return: the resulting string
*/
char *leet(char *input)
{
if (input == NULL)
{
return (NULL);
}

for (int i = 0; input[i] != '\0'; i++)
{
for (int j = 0; j < 3; j++)
{
if ((input[i] == 'a' + j) || (input[i] == 'A' + j))
{
input[i] = '4';
break;
}
}

for (int j = 4; j < 6; j++)
{
if ((input[i] == 'e' + (j - 4)) || (input[i] == 'E' + (j - 4)))
{
input[i] = '3';
break;
}
}

if ((input[i] == 'o') || (input[i] == 'O'))
{
input[i] = '0';
}

if ((input[i] == 't') || (input[i] == 'T'))
{
input[i] = '7';
}

if ((input[i] == 'l') || (input[i] == 'L'))
{
input[i] = '1';
}
}

return (input);
}
