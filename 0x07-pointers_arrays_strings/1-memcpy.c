#include "main.h"

/**
 * _memcpy - function as entry point
 * @n : bytes
 * @src : memory area
 * @dest : memory area
 * Return: Always 0 (Success)
 */

char *_memcpy(char *dest, char *src, unsigned int n);
{
	unsigned int mag;

	for (mag = 0; mag < n; mag++)
		dest[mag] = src[mag];

	return (dest);
}
