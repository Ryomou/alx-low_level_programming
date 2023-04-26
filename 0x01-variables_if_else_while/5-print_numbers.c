#include <stdio.h>

/**
 * main- entry point
 * Description - prints single digit numbers
 * less than 10.
 * Return: Always 0 (Success)
*/

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
		printf("%d", x);
	printf("\n");
	return (0);
}
