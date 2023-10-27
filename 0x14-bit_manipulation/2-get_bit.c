#include "main.h"
/**
 * get_bit - get and return the value of a bit at a given index
 * @index: index bit to be gotten
 * @n: number to check the value of
 * Return: integer 1 or 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > sizeof(size_t) * 8)
		return (-1);

	for (i = 0; i < index; i++)
		n = n >> 1;
	return ((n & 1));
}
