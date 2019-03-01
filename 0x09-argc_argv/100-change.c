#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc : count
 * @argv : array arg
 * Return: (0) always
 */

int main(int argc, char *argv[])
{
	int a;
	int b = 0;

	if (argc - 1 != 1)
	{
	printf("Error\n");
	return (1);
	}
	a = atoi(argv[1]);
	if (a >= 25)
	{
	b = b + a / 25;
	a = a % 25;
	}
	if (a >= 10)
	{
	b = b + a / 10;
	a = a % 10;
	}
	if (a >= 5)
	{
	b = b + a / 5;
	a = b % 5;
	}
	if (a >= 2)
	{
	b = b + a / 2;
	a = a % 2;
	}
	if (a >= 1)
	{
	b = b + a / 1;
	a = a % 1;
	}
	printf("%d\n", b);
	return (0);
}
