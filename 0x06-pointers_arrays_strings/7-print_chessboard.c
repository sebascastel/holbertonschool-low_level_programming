#include "holberton.h"
/**
 * print_chessboard - prints the chessboard
 *@a: board
 * Return: (0) always
 */
void print_chessboard(char (*a)[8])
{
	int b = 0;
	int c = 0;

	while (b != 7 || c != 7)
	{
	_putchar(a[b][c]);
	if (c == 7)
	{
	_putchar('\n');
	c = 0;
	b++;
	}
	else
	c++;
	}
	_putchar(a[b][c]);
	_putchar(10);
}
