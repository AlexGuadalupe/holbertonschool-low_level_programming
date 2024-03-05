#include <stdio.h>
#include "main.h"

/**
 * main - main function
 * @argc: arg count
 * @argv: arg name
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
int i = 1;
printf("%s\n", argv[0]);
while (i < argc)
{
printf("%s\n", argv[i]);
i++;
}
    return 0;
}
