#include "main.h"

/**
*_isdigit - function that check if a character is a digit 0 through 9
*@c: check char
*Return: returns 1 if it is uppercase , 0 if not
*/

int _isdigit(int c)
{

        if ((c >= '48') && (c <= '57'))
                 return (1);
        else
                 return (0);
}
