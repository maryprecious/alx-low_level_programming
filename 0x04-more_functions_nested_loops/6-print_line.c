#include "main.h"
/**
*print_line - prints a straight line
*@n:number of times the character _ should be printed
*Return:void
*/
void print_line(int n)
{
while (n-- > 0)
{
_putchar('_');
}
_putchar('\n');
}
