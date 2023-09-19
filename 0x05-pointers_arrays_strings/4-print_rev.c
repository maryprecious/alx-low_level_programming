#include "main.h"
/**
* print_rev - prints a string in reverse
* @s: string to print
*/

void print_rev(char *s)
{
int nma = 0;
int o;

while (*s != '\0)
{
	nma++;
	s++;
}
s--;
for(o = nma; o > 0; o--)
{
	_putchar(*s);
	s--;
	}
_putchar('\n');
}
