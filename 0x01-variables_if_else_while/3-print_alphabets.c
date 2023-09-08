#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point for printing alphabet in lower case.
 *
 * Return: Always 0 when (success)
 */
int main(void)
{
int lowerCase = 'a';
int upperCase = 'A';
while (lowerCase <= 'z')
{
putchar(lowerCase);
lowerCase += 1;
}
while (lowerCase <= 'z')
{
putchar(upperCase);
upperCase += 1;
}
putchar('\n');
return (0);
}
