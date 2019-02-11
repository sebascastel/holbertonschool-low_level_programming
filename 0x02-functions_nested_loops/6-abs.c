#include "holberton.h"
/**
 * _abs - Entry point
 *
 *@i: check abs
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
