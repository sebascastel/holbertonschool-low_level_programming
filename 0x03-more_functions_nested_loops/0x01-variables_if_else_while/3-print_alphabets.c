#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: (0) always
 */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
		putchar(ch);
			for (ch = 'A' ; ch <= 'Z' ; ch++)
				putchar(ch);
	putchar(10);
	return (0);
}
