#include "lists.h"

/**
* list_len - prints all str elements of the linked list
* @h: pointer to the head of a linked list.
* Return: counts the amount of links
*/

size_t list_len(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
