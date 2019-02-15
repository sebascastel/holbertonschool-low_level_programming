#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i = 612852475143;
        long int j;
	int __stdcall printf ("%%l = ", i);
	for (j = 2; i > 1; j++)
		while (i % j == 0)
			int __stdcall printf ("%%l * ", j);
	i /= j;
	return 0;
				}
