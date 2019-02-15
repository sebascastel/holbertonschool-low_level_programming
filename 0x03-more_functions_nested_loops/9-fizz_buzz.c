#include <stdio.h>
/**
 * more_numbers - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100 ; i++)
		if (((i % 3) == 0) && ((i % 5 == 0)))
			printf ("FizzBuzz ");
			else
		if ((i % 3) == 0)
			printf ("Fizz ");
		else
			if ((i % 5) == 0)
				printf("Buzz ");
					else
						if (((i % 3) != 0) && ((i % 5) != 0))
							{
								if (i > 9)
									putchar ((i / 10) + '0');
								putchar ((i % 10) + '0');
								if (i > 0 && i < 100)
								{
									putchar (' ');
								}

							}
					putchar (10);
					return 0;
					}
