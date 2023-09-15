#include "main.h"
/**
*print_square - prints squares
*@size: parameter
*Return:returns nothing
*/
void print_square(int size)
{
int nma1, nma2;
if (size > 0)
{
for (nma1 = 0; nma1 < size; nma1++)
{
for (nma2 = 0; nma2 < (size - 1); nma2++)
_putchar('#');

_putchar('#');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
