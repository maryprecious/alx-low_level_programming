#include "main.h"
/**
*more_numbers - prints numbers to 14
*
*Return:void
*/
void more_numbers(void)
{
int number5, number6;

for (number5 = 0; number5 < 10; number5++)
{
for (number6 = 0; number6 <= 14; number6++)

{
if (number6 > 9)
{
_putchar((number6 / 10) + '0');
}
_putchar((number6 % 10) + '0');
}
_putchar(10);
}
}
