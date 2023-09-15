#include "main.h"
/**
*print_diagonal - prints a diagonal
*@n:parameter
*Return:returns nothing
*/
void print_diagonal(int n)
{
int oreo, sample;
if (n > 0)
{
for (oreo = 0; oreo < n; oreo++)
{
for (sample = 0; sample < oreo; sample++)
_putchar(' ');

_putchar('\\');

if (oreo == (n - 1))
continue;
_putchar('\n');
}
}
_putchar('\n');
}
