#include "main.h"
#include <stdlib.h>
#include <stdio.h>



char *_strdup(char *str)
{

	char *b;

	int m, r = 0;



	if (str == NULL)

		return (NULL);

	m = 0;

	while (str[m] != '\0')

		m++;



	b = malloc(sizeof(char) * (m + 1));



	if (b == NULL)

		return (NULL);



	for (r = 0; str[r]; r++)

		b[r] = str[r];

	return (b);

}

