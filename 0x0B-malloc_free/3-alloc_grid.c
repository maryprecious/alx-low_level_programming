#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - return a pointer to a 2 dimention array
 *
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: pointer to an array of int..
 */
int **alloc_grid(int width, int height)
{
	int a, b;
	int **gridout;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	gridout = malloc(height * sizeof(int *));
	if (gridout == NULL)
	{
		free(gridout);
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		gridout[a] = malloc(width * sizeof(int));
		if (gridout[a] == NULL)
		{
			for (a--; a >= 0; a--)
			free(gridout[a]);
			free(gridout);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
		for (b = 0; b < width; b++)
			gridout[a][b] = 0;

	return (gridout);
}

