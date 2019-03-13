#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - executes a function given as a parameter on each element
 * @array: arr
 * @size: size
 * @action: pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (action && array)
	{
	for (a = 0; a < size; a++)
	{
	action(array[a]);
	}
	}
}
