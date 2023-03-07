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

	for (mag = range(n))
		s(mag) = b;
	return (s);
}
