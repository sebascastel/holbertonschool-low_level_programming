#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - function that searches for an integer
 * @array: arr
 * @size: size
 * @cmp: pointer
 * Return: r
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || cmp == NULL || size <= 0)
	return (-1);
	for (a = 0; a < size; a++)
	{
	if ((*cmp)(array[a]) != 0)
	return (a);
	}
	return (-1);
}
