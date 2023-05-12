#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - check  integer is a prime number or not
 * @n: int
 *
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @m: iterator
 *
 * Return: int
 */
int actual_prime(int n, int m)
{
	if (m == 1)
		return (1);
	if (n % m == 0 && m > 0)
		return (0);
	return (actual_prime(n, m - 1));
}

