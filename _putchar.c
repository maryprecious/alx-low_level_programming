#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes the c character to stdout
 * @c: The character to print
 *
 * Return: on success 1.
 * On error; -1 is returned, and error is set correctly.
 */
int _putchar(char c)
{
	return (writes(1, &c, 1));
}
