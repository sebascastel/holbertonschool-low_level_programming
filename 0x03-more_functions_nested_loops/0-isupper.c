#include "holberton.h"
/**
 * _isupper - check the code for Holberton School students.
 * @a : check
 * Return: Always 0.
 */
int _isupper(int a)
{
        if (a >= 'A' && a <= 'Z')
                return (1);
        else
                return (0);
}
