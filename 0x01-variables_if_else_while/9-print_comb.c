#include <stdio.h>

/**
 * main - Entry point for printing all possible combinations of single digit numbers.
 *
 * Return: Always 0 when (success)
 */
int main(void)
{
	int i = '0'; /* Start with '0' */

/* print single digit numbers seperated by a comma and a spase */
	while (i <= '9')
	{
		putchar(i);
		if (i != '9')
		{
			/* don't print comma after last number */
			putchar(',');
			putchar(' ');
		}
		++i;
		/* increase the counter */
	}
	/* print new line character */
	putchar('\n');

	return (0);
}
