#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	long i = 612852475143;
	long j;

	for (j = 2; j < i; j++)
	{
		if (i % j == 0)
			i = j / j;
	}
	printf("%li\n", i);
	return (0);
}
