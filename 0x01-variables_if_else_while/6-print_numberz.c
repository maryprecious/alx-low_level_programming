#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point for printing all single digit numbers.
 *
 * Return: Always 0 when (success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}

