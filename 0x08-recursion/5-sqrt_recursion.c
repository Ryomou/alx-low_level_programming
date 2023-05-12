#include "main.h"

/**
 * _sqrt_recursion - returns natural square root
 * @n:int
 * @m: square root
 * Return: the resulting square root
*/
int actual_sqrt_recursion(int n, int m);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * @n: number to calculate the sqaure root of
 * @m: iterator
 *
 * Return: square root
 */
int actual_sqrt_recursion(int n, int m)
{
	if (m * m > n)
		return (-1);
	if (m * m == n)
		return (m);
	return (actual_sqrt_recursion(n, m + 1));
}

