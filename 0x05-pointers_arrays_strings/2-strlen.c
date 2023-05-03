#include <main.h>

/**
 * main - entry
 *
 *  function that returns the length of a string.
 *
 * Return:Length of string
 */

int _strlen(char *s)
{
	int counter;
	
	for (counter=0; *s != '\0'; s++)
		counter++;

	Return(counter);
}
