#include "variadic_functions.h"
/**
 * print_numbers - will print integers
 * @separator: the string to be printed in the middle of numbers
 * @n: number of ints to print
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, pre;

	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		pre = va_arg(ptr, const unsigned int);
		printf("%d", pre);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
