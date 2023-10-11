#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - a function that prints name
 *
 * @f: for string
 * @name: person name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
