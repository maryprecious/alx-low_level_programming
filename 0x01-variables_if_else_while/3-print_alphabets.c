#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point for printing alphabet in lower case and upper case.
 *
 * Return: Always 0 when (success)
 */
int main(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
