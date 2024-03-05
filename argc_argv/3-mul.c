#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: arg count
 * @argv: arg name
 * Return: 0 if successful
*/
int main(int argc, char *argv[])
{
int a = atoi(argv[1]);
int b = atoi(argv[2]);
int product = a * b;
printf("%d\n", product);
return (0);
}
