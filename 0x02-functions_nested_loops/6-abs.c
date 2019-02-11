#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: (0) always
 */

int _abs(int i)
{
	if (i < 0)
	{
		return (-1 * i);
	}
	return (i);
}
