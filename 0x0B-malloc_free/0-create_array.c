#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - Entry point
 *@size: size of array
 *@c: char to assign
 *Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *n;

	unsigned int b;

	n = malloc(sizeof(*n) * size);
	for (b = 0; b < size; b++)
		n[b] = c;
	return (n);

	if (size == 0 || n == NULL)
	return (NULL);
}
