#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	int h, i;
	char rev;

	for (h = 0; s[h] != '\0'; ++h)
		;

	for (i = 0; i < h / 2; i++)
	{
		rev = s[i];
		s[i] = s[h - 1 - i];
		s[h - 1 - i] = rev;
	}
}
