#include "main.h"

/**
 * _strspn - Entry function
 * @s:
 * @accept:
 * Return: str
 */

unsigned int(char *s, char *accept)
{
	unsigned int mag = 0;
	int ben;

	while (*s)
	{
		for (ben = 0; accept[ben]; ben++)
		{
			if (*s == accept[r])
			{
				mag++;
				break;
			}
			else if (accept[r+1] == '\0')
				return (mag);
		}
		s++;
	}
	return (mag);
}
