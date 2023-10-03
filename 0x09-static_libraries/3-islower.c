#include "main.h"

/**
 * _islower - Will check for lower case character
 * Describing: use _putchar to print
 * @c: select alphabet
 * Return: 1 when c is lower otherwise 0
 */

int _islower(int c)
{
	char p;
	int lower = 0;

	for (p = 'a'; p <= 'z'; p++)
	{
		if (p == c)
		{
			lower = 1;
		}
		return (lower);
}
}
