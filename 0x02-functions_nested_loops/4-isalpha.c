#include "holberton.h"
/**
 * _isalpha - Entry point
 *
 *@i : check letter
 *
 * Return: (0) always
 */

int _isalpha(int i)
{
	if ((i > 96 && i < 123) || (i > 64 && i < 91))
	{
	return (1);
	}
	return (0);
}
