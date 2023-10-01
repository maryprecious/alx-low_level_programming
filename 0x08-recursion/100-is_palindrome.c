#include "main.h"
/**
 * _strlen_recursion - for string length
 * @s: string
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * comparing_string - compare each character of the string
 * @s: string
 * beauty: smallest iterator
 * smile: largest iterator
 * Return: int
 */
int comparing_string(char *s, int beauty, int smile)
{
	if (*(s + beauty) == *(s + smile))
	{
		if (beauty == smile || beauty == smile + 1)
			return (1);
		return (0 + comparing_string(s, beauty + 1, smile - 1));
	}
	return (0);
}
/**
 * is_palindrome - check if a string is a pilandrome
 * @s: string
 * Return: 1 if a pilandrome, 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	else
	{
	return (comparing_string(s, 0, _strlen_recursion(s - 1)));
	}
}

