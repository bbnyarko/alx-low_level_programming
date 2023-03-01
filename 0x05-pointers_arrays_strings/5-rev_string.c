#include "main.h"

/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */
void rev_string(char *s)
{
	int i, c, k;
	char tmp;

	c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	k = c - 1;

	/*for (k = 1; k < c; k++)
	{
		a++;
	}*/

	for (i = 0; i < (c / 2); i++)
	{
		tmp = s[i];
		s[i] = s[k];
		s[k--] = tmp;
	}
}
