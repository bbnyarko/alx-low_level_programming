#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	
	int b, m;	

	if (s1 == NULL)
		s1 = "";
		
	if (s2 == NULL)
		s2 = "";

		b =0;

		m = 0;

	while (s1[b] != '\0')
		b++;

	while (s2[m] != '\0')
		m++;

	conct = malloc(sizeof(char) * (b + m + 1));		

	if (conct == NULL)		
		return (NULL);

	b = 0; 	m = 0;
	
	while (s1[b] != '\0')		
	{
		conct[b] = s1[b];
	
		b++;		
	}
	
	while (s2[ci] != '\0')		
	{
		conct[b] = s2[m];
	
		b++, m++;		
	}

	conct[b] = '\0';		
	return (conct);
}

