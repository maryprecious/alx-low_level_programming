#include "main.h"
#include "stdlib.h"
/**
 * str_concat - concertenate two strings
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: null on failure
 */
char *str_concat(char *s1, char *s2)
{
	size_t pet1, pet2, a, b;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	pet1 = 0;
	while (s1[pet1] != '\0')
	{
		pet1++;
	}

	pet2 = 0;
	while (s2[pet2] != '\0')
	{
		pet2++;
	}

	ptr = malloc(sizeof(char) * (pet1 + pet2 + 1));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (a = 0; a < pet1; a++)
	{
		ptr[a] = s1[a];
	}
	for (b = 0; b <= pet2; b++)
	{
		ptr[a] = s2[b];
		a++;
	}
	return (ptr);
}
