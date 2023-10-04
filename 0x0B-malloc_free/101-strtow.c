#include "main.h"
#include <stdlib.h>
/**
 * ch_free_grid - main entry
 * @grid: input
 * @height: input
 */
void ch_free_grid(char **grid, size_t height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
		free(grid[height]);
			free(grid[height]);
		free(grid);
	}
}
/**
 * strtow - splits string into two
 *
 * @str: string with words to be splited
 * Return: a pointer to the new allocated memory for the string
 */
char **strtow(char *str)
{
	char **aout;
	size_t c, height, a, p, a1;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
		height++;
	{
		aout = malloc((height + 1) * sizeof(char *));
	}
		if (aout == NULL || height == 0)
		{
			free(aout);
			return (NULL);
		}
	for (a = a1 = 0; a < height; a++)
	{
		for (c = a1; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				a1++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				aout[a] = malloc((c - a1 + 2) * sizeof(char));
				if (aout[a] == NULL)
				{
				ch_free_grid(aout, a);
				return (NULL);
				}
			}
		}
	}
}
