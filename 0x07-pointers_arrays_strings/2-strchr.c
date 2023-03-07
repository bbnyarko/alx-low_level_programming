#include "main.h"

/**
 * _strchr - Entry function
 * @s :input  string
 * @c :input
 * Return: Always 0 (success)
 */

char *_strchr(char *s, char c)
{
	
	int magg;
	
	for (magg = 0; s[magg] >= '\0' ; magg++)

	{
		if (s[magg] == c)
			return (s + magg);
	}

	return (NULL);
}
