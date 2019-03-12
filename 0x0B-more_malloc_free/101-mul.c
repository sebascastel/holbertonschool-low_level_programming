#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "holberton.h"
/**
 * _strlen - lenght of a string.
 * @s : string
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	n++;
	return (n);
}
/**
 * _atoi - Converts a array to an integer
 * @s: character array to convert
 * Return: 0
 */
int _atoi(char *s)
{
	int a;
	int b;
	int c;

	a = 0;
	b = 0;
	c = -1;
	while (s[b] != '\0' && (s[b] < 48 || s[b] > 57))
	{
	if (s[b] == '-')
	c *= -1;
	b++;
	}
	while (s[b] != '\0' && (s[b] >= 48 && s[b] <= 57))
	a = (a * 10) - (s[b++] - '0');
	return (a * c);
}
/**
 * errore - writes the character c to stdout
 * Return: On success 1.
 */
void errore(void)
{
	int a;
	char *b;

	b = "Error";
	for (a = 0; b[a] != '\0'; a++)
	_putchar(b[a]);
	_putchar(10);
	exit(98);
}
/**
 * main - Entry point
 * @argc : count
 * @argv : array arg
 * Return: (0) always
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	int c;
	int d;

	(void) argv;
	if (argc != 3)
	{
	errore();
	}
	for (a = 1; a <= 2; a++)
	for (b = 0; argv[a][b] != '\0'; b++)
	if (argv[a][b] < 48 || argv[a][b] > 57)
	errore();
	c = _strlen(argv[1]);
	d = _strlen(argv[2]);
	printf("n1: %d\nn2: %d\n", c, d);
	return (0);
}
