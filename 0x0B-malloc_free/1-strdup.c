#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * *_strdup - copies the string given parameter
 * @str: string to be duplicated
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int n, len;

	n = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;
	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);

	while ((duplicate[n] = str[n]) != '\0')
		n++;

	return (duplicate);
}


