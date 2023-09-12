#include "main.h"

/**
 * print_sign - Print the exact sign of a number
 * @c: The number to be checked well
 * Return: 1 for a positive number, -1 for negative number or zero or anyother thing
 */

int print_sign(int n)

{


	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
