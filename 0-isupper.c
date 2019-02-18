#include "holberton.h"
/**
 * _isdigit - check the code for Holberton School students.
 * @a : check
 * Return: Always 0.
 */
int _isdigit(int a)
{
	if (a >= 'A' && a <= 'Z')
		return (1);
	else
		return (0);

}
