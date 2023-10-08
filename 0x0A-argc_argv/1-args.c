#include <stdio.h>
/**
 * main - will  prints the number of arguments passed into it.
 * @argc: total number of command line argument.
 * @argv: the array made up of the program command line arg.
 * Return: (0) when successful.
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
