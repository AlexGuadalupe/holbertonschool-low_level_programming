#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - prints a name as is
 * @name: name of the person
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f != NULL) /**VERIFICAR SI name Y f SON NULL*/
{
return;
}

f(name);
}
