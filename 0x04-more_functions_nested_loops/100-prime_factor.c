#include <stdio.h>

/**
*main-finds and prints the largest prime factor
*of a number
*
*Return: returns 0
*/

int main(void)
{
long number = 612852475143;
int nma;
while (nma++ < number / 2)
{
if (number % nma == 0)
{
number /= 2;
continue;
}

for (nma = 3; nma < number / 2; nma += 2)
{
if (number % nma == 0)
number /= nma;

}
}
printf("%ld\n", number);
return (0);
}
