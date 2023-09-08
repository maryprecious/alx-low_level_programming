#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point of alphabet in lowercase followed by a new line.
 *
 * Return: 0 Always when (success)
 */
int main(void)
{
int lowerCase = 'a';
while (lowerCase <= 'z')
{
if (lowerCase == 'e' || lowerCase == 'q')
{
lowerCase += 1;
}
else
{
putchar(lowerCase);
lowerCase += 1;
}
}
putchar('\n');
return (0);
}
