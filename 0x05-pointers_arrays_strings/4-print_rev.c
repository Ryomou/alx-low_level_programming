#include "main.h"

/**
 *print_rev- prints a string, in reverse, followed by a new line
 *
 *@s:pointer string
 *
 * Return void
 */

void print_rev(char *s)
{
	int r = 0;

	while (s[r])
		r++;

	while (r--)
	{
		_putchar(s[r]);
	}
	_putchar('\n');
}

