#include "main.h"
#include "stdlib.h"
/**
 * _strdup - return a pointer to a new one
 * space in memory will also duplicate the string it holds
 * to the new space
 *
 * @str: the initial input string
 *
 * Return: pointer to thenew one
 * which is an array of characters
 */
char *_strdup(char *str)
{
	size_t a, b;
	char *strdout;

	if (str == NULL)
	{
		return (NULL);
	}

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}

	strdout = (char *)malloc(sizeof(char) * (a + 1));

	if (strdout == NULL)
	{
		return (NULL);
	}

	for (b = 0; b <= a; b++)
	{
		strdout[b] = str[b];
	}
	return (strdout);


}
