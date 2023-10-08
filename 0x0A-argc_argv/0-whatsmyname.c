#include <stdio.h>
/**
 * main - print it's supposed name, fllowed by a new line.
 * @argc: number of command line of the arguments.
 * @argv: the very array that contains the command line arguments.
 * Return: (0) when successful
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
