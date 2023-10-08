#include <stdio.h>
/**
 * main - to print all arguments it will receive
 * @argc: let this be number of lines
 * @argv: array that has the number of lines
 * Return: (0) when successful.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
