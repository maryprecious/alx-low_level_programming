#include <stdio.h>
/**
*main - program that prints the numbers from 1 to 100, followed by a new line. 
*But for multiples of three print Fizz instead of the number and for the multiples of five print Buzz.
*
*Return: returns 0 (success)
*/
int main(void)
{
int num;
while (num++ < 100)

if ((num % 3 == 0) && (num % 5 == 0))
printf("FizzBuzz ");

else if ((num % 3) == 0)
printf("Fizz ");

else if ((num % 5) == 0)
{
if (num != 100)
printf("Buzz ");

else
printf("Buzz");
}

else
printf("%d ", num);

printf("\n");
return (0);
}
