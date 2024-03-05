#include <stdio.h>
#include "main.h"
/**
 * main - main function
 * @argc: arg count
 * @argv: arg name
 * Return: 0 if succesful
*/
int main(int argc, char *argv[])
{
printf("%s\n, argv", argv[0]);

for (int i = 1; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}

