#include "main.h"

/**
 * _memset - entry point function
 * @n : bytes
 * @s : pointed memory area
 * @b : constant byte
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int mag;

	for (mag = 0; mag < n; mag++))
		s[mag] = b;
	return (s);
}
