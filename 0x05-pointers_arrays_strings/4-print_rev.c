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

/**
 *_strlen - returns the length of a string
 * @s: string
 *Return: returns lenght;
 */
int _strlen(char *s)
{
int adam, eve;
inc = 0;
for (adam = 0; s[adam] != '\0'; adam++)
inc++;

return (eve);
}
