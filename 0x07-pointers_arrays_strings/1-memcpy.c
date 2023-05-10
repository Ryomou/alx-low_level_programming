#include "main.h"

/**
 *_memcpy - a function which copies memory area
 *@dest: memory where its stored
 *@src: memory where its copied
 *@n: number of bytes
 *
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int h = 0;
	int i = n;

	for (; h < i; h++)
	{
		dest[h] = src[h];
		n--;
	}
	return (dest);
}

