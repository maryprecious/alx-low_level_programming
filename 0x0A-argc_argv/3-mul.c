#include <stdio.h>
#include <stdlib.h>
/**
 * main - will multiples two numbers
 * @argc: total number of the  command line argument
 * @argv: the array that is having the command line argument
 * Return: (0) when successful
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
