#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
	int r;
	int k;

	for (r = 0; r < 8; r++)
	{
		for (k = 0; k < 8; k++)
			_putchar(a[r][k]);
		_putchar('\n');
	}
}

