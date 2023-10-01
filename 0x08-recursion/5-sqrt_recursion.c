#include "main.h"

/**
* sqrt_a- returns the natural square root of a number
* @a: number to be used
* @d: iterator
* Return: the square root of n or -1
*/
int sqrt_a(int a, int d)
{
	if (d * d == a)
	{
		return (d);
	}
	else if (d * d > a)
	{
		return (-1);
	}
	return (sqrt_a(a, d + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: test number
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}

