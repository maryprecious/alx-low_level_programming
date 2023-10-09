#include "main.h"
#include <stdlib.h>
/**
 * array_range - to create an array of integers
 * @min: minimum value
 * @max: value of maximum
 * Return: int pointer to the allocated memory
 */
int *array_range(int min, int max)
{
	int f, l;
	int *a;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	a = malloc(sizeof(int) * l);
	if (a == NULL)
		return (NULL);
	for (f = 0; f < l; f++)
	{
		a[f] = min;
		min++;
	}
	return (a);
}
