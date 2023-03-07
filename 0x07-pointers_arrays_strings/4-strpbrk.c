#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int mag, ben;

	for (mag = 0; s[mag] != '\0'; mag++)
	{
		for (ben = 0; accept[ben] != '\0'; ben++)
		{
			if (s[mag] == accept[ben])
				return (s + mag);
		}
	}

	return (NULL);
}

