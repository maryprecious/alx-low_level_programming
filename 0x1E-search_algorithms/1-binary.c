#include "search_algos.h"

int recurse_helper(int *array, size_t left, size_t right, int value);

/**
 * binary_search - will search for value in array of sorted ints
 * @array: the array to search
 * @size: the size of array
 * @value: the value to search
 *
 * Return: index of found value; or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (recurse_helper(array, 0, size - 1, value));
}

/**
 * recurse_helper - the recursive implement of binary search
 * @array: thevarray to search
 * @left: the leftmost index
 * @right: the rightmost index
 * @value: the value to search
 *
 * Return: index of found value; or -1 if not found
 */
int recurse_helper(int *array, size_t left, size_t right, int value)
{
	size_t i = left, mid;

	if (left > right)
		return (-1);

	/* print search progress */
	printf("Searching in array: %d", array[i++]);
	while (i <= right)
		printf(", %d", array[i++]);
	printf("\n");

	/* calculate mid */
	mid = left + ((right - left) / 2);

	/* check if mid is value */
	if (array[mid] == value)
		return (mid);
	else if (array[mid] > value)
	{
		if (mid != 0)
			return (recurse_helper(array, left, mid - 1, value));
		else
			return (-1);
	}
	else
		return (recurse_helper(array, mid + 1, right, value));
}
