#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *_strdup - concatenates a string into a string
 *@s1: string to concatenate
 *@s2: string to concatenate
 *Return: NULL
 */

char *str_concat(char *s1, char *s2)
{
int i = 0;
int a = 0;
int e = 0;
int m = 0;
char *s;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

while (s1[i])
i++;

m = i + a;
s = malloc(sizeof(char) * (m + 1));

if (s == NULL)
return (NULL);

while (e < m)
{
if (e <= i)
s[e] = s1[e];

if (e >= i)
{
s[e] = s2[a];
a++;
}
e++;
}
s[e] = '\0';
return (s);
}
