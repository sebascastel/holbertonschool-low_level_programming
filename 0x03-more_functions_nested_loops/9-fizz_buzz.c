#include "holberton.h"
#include <stdio.h>
/**
* main - entry point for the program "fizzbuzz"
*
* Return: 0
*/
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
	if (a % 3 == 0)
	{
	if (a % 5 == 0)
	printf("FizzBuzz ");
	else
	printf("Fizz ");
	}
	else if (a % 5 == 0)
	if (a == 100)
	printf("Buzz");
	else
	printf("Buzz ");
	else
	printf("%d ", a);
	}
	printf("\n");
	return (0);
}
