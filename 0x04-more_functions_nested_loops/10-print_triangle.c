#include "main.h"
/**
*print_triangle - prints a triangle
*@size:size parameter of the triangle
*Return:void
*/
void print_triangle(int size)
{
int nma1, nma2;

if (size > 0)
{
for (nma1 = 1; nma1 <= size; nma1++)
{
for ((nma2 = size - nma1); nma2 > 0; nma2--)
_putchar(' ');

for (nma2 = 0; nma2 < nma1; nma2++)
_putchar('#');

if (nma1 == size)
continue;

_putchar('\n');
}
}
_putchar('\n');
}
