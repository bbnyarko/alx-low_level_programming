#include "main.h"

/**
 * _strspn - Entry function
 * @s:input str
 * @accept:input
 * Return: str
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int mag = 0;
	int ben;

	while (*s)
	{
		for (ben = 0; accept[ben]; ben++)
		{
			if (*s == accept[ben])
			{
				mag++;
				break;
			}
			else if (accept[ben + 1] == '\0')
				return (mag);
		}
		s++;
	}
	return (mag);
}
