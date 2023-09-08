#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point for printing alphabet lower case in reverse. 
 *
 * Return: Always 0 when (success)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
