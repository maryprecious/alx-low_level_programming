#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point generates a random password
 *
 * Return: the generated password
 */
int main(void)
{
char c;
int nma;

srand(time(0));
while (nma <= 2645)
{
c = rand() % 128;
nma += c;
putchar(c);
}
putchar(2772 - nma);
return (0);
}
