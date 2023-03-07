#include "main.h"

/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0 (Success)
 */

void print_chessboard(char (*a)[8])
{
	int magg;
	int ben;

	for (magg = 0; magg < 8; magg++)
	{
		for (ben = 0; ben < 8; ben++)
			_putchar(a[magg][ben]);
		_putchar('\n');
	}
}

