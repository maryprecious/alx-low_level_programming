#include "main.h"

/**
 * _isalpha - Will check for alphabetic character
 * @c: let the character be checked
 * Return: 1 for any alphabetic character or 0 for any other thing else
 */

int _isalpha(int c)
{
if ((c >= 97) || (c >= 97 && c <= 122))
{

return (1);
}
return (0);
}
