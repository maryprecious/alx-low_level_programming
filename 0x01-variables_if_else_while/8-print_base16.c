#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point for printing numbers of base 16 in lowercase.
 *
 * Return: Always 0 when (success)
 */
int main(void)
{
	int num;
	char letter;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');
	
	return (0);
}
