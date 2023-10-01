#include "main.h"
/**
 * primenumber_a - return 1 if n is a prime
 * @a: number to be checked
 * @r: divisor num
 * Return: 1 if n is prime, then 0 if not
 */
int primenumber_a(int a, int r)
{
if (a <= 1 || (a != r && a % r == 0))
{
return (0);
}
else if (a == r)
{
return (1);
}
return (primenumber_(a, r + 1));
}
/**
 * is_prime_number - tell if an integer is a prime or not
 * @n: number to check
 * Return: 0 or 1
 */
int is_prime_number(int n);
{
	return (primenumber_a(n, 2));
}

