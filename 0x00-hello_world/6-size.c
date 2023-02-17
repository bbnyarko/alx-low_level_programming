#include <stdio.h>

/**
*main -Entry point
*
*Return: Always 0 (Success)
*
*/
int main(void)
{
        int charSize = sizeof(char);
	int intSize = sizeof(int);
	int longsize = sizeof(long int);
	int longlongSize = sizeof(long long int)
	int floatSize = sizeof(float);

	printf("Size of a char: %zu byte(s)\n", sizeof(char));
        printf("Size of an int: %zu byte(s)\n", sizeof(int));
        printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
        printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
        printf("Size of a float: %zu byte(s)\n", sizeof(float));
        return (0);
}
