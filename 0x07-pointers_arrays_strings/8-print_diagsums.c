#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int mag1, mag2, y;

	mag1 = 0;
	mag2 = 0;

	for (y = 0; y < size; y++)
	{
		mag1 = mag1 + a[y * size + y];
	}

	for (y = size - 1; y >= 0; y--)
	{
		mag2 += a[y * size + (size - y - 1)];
	}

	printf("%d, %d\n", mag1, mag2);
}

