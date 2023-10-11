#include "function_pointers.h"
/**
 * int_index - need to locate an interger
 * @array: array of init
 * @size: size of array
 * @cmp: function pointer to compare values
 *
 * Return: if no element matches, return -1, -1 if size <=0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) != 0)
			return (a);
	}
	return (-1);
}
