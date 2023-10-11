#include "function_pointers.h"
/**
 * array_iterator - will iterate through an array
 * @array: the array that is targetted
 * @size: the size of the array
 * @action: array function pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(*array);
		array++;
	}
}
