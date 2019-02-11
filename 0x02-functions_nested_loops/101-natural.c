#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: (0) always
 */

int main(void)
{
	int count;
	int div3;
	int div5;
	int sum;

	sum = 0;
	for (count = 0; count < 1024; count++)
	{
		div3 = count % 3;
		div5 = count % 5;
		if (div3 == 0 || div5 == 0)
		{
			sum += count;
		}
	}
	printf("%d\n", sum);
	return (0);
}
