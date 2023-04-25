#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints lowerCase and upperCase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*prints lowerCase*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/*prints upperCase*/
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
