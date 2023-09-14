#include "main.h"

/**
*_isupper - function that checks correctly if a character is uppercase or not an uppercase
*@c: tested character, char to check
*Return: returns 1 if it is uppercase , 0 if not
*/

int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
return (1);

return (0);

}
