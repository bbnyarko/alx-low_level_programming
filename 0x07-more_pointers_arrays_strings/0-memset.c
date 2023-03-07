#include "main.h"

/*
 * _memset - entry point function
 * n - bytes
 * s - pointed memory area
 * b - constant byte
 */

cha *_memset(char *s, char b, unsigned int n)
{
	unsigned int mag;

	for (mag = 0; mag < n; mag++)
		s(mag) = b;
	return (s);
}
