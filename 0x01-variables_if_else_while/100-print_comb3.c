#include <stdio.h>

/**
 * main - Entry point for printing alphabet in lower case.
 *
 * Return: Always 0 when (success)
 */
int main(void)
{
	int i = '0';
	int j = '0';

	while(i <= '9')
	{
		putchar(i);
		putchar(j);
		if (i == '8' && j == '9')
		{
			putchar('\n');
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	j - '0';
	i++;
}
return (0);
}
