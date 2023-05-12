#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: the string entered
 *
 * Return: The length
 */

int _strlen_recursion(char *s)
{
	int lit = 0;

	if (*s > '\0')
	{
		lit++;
		lit += _strlen_recursion(s + 1);
	}

	return (lit);
}

