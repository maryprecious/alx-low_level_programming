#include "main.h"

/**
 * _islower - Will check for lower case character
 * @c: let the character be checked
 * Return: 1 for any lower case character or 0 for any other thing else
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
return (0);
}
