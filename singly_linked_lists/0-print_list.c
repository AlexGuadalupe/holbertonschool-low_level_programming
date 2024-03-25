#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{
const list_t *current = h;
size_t count = 0;

printf("[");
while (current != NULL) 
{
if (current->str == NULL) 
{
printf("(nil)");
}
else 
{
printf("%s", current->str);
}

count++;
current = current->next;
if (current != NULL) 
{
printf(", ");
}
}
printf("]\n");

return count;
}