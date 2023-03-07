#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char _strpbrk(char *s, char *accept)
{
		int mag;

		while (*s)
		{
			for (mag = 0; accept[mag]; mag++)
			{
			if (*s == accept[mag])
			return (s);
			}
		s++;
		}

	return ('\0');
}

