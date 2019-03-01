#include <stdio.h>
/**
 * main - Entry point
 * @argc : count
 * @argv : array arg
 * Return: (0) always
 */

int main(int argc, char *argv[])
{
	int a = 0;

	while (a != argc)
	printf("%s\n", argv[a++]);
	return (0);
}
