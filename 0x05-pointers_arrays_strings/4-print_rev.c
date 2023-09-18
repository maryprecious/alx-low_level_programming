#include "main.h"
/**
* print_rev - prints a string in reverse
* @s: string to print
*/

void print_rev(char *s)
{
int nma = 0, mpa = 0;
nma = _strlen(s);

for (mpa = nma - 1; mpa >= 0; mpa--)

	_putchar(s[mpa]);

_putchar('\n');
}
