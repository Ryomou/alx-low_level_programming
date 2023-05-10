#include "main.h"

/**
 * _memset - fill a block of memory with a value
 * @s: starting address
 * @b: desired value
 * @n: no. of bytes to change
 *
 * Return:  array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

