#include "holberton.h"
/**
 * _islower - Entry point
 *
 *@i : lowercase checj
 *
 * Return: (0) always
 */

int _islower(int i)
{
	if (i > 96 && i < 123)
	{
		return (1);
	}
	return (0);
}
