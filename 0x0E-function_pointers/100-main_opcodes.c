#include <stdio.h>
#include <stdlib.h>
/**
 *main - start point
 *@argc : count
 *@argv : vec
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	unsigned char *c;

	if (argc != 2)
	{
	printf("Error\n");
	exit(1);
	}
	a = atoi(argv[1]);
	if (a < 0)
	{
	printf("Error\n");
	exit(2);
	}
	c = (unsigned char *) main;
	for (b = 0; b < (a - 1); b++)
	if (a > 0)
	{
	printf("%02hhx ", c[b++]);
	printf("%hhx\n", c[b]);
	}
	return (0);
}
