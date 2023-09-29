#include "main.h"

int nma_prime_number(int n, int r)

/**
 * is_prime_number - Tell if an integer is a prime or not. 
 * @n: number to check
 *
 * Return: 1 if n is really a prime, then 0 if not
 */
int is_prime_number(int n);
{
	if (n <= 1)
		return (0);
	return (nma_prime_number(n, n - 1));
}

/**
 * nma_prime_number - return 1 if n is a prime
 * @n: number to be checked
 * @r: reprise
 *
 * Return: 1 if n is prime, then 0 if not
 */
int nma_prime_number(int n, int r)
{
	if (r == 1)
		return (1);
	if (n % r == 0 && r > 0)
		return (0);
	return (nma_prime_number(n, r - 1));
}
