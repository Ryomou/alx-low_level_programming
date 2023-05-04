#include "main.h"

/**
 * puts_half - prints second half of string
 *@str: array string type
 *the number is odd print the last character of the string.
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
