#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point for alphabet.
 *
 * Return: 0 Always after (success)
 */
int main(void)
{
int lowerCase = 'a';
while (lowerCase <= 'z')
{
putchar(lowerCase);
lowerCase += 1;
}
putchar('\n');
return (0);
}
