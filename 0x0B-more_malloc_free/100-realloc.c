#include <stdlib.h>
/**
 * *_realloc - function that reallocates a memory block
 *@old_size: old size
 *@new_size: new sizes
 *@*ptr: pointer to the memory previously allocated
 *Return: (0) always
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int a;
	unsigned int b;
	char *c;

	if (ptr == NULL)
	{
	c = malloc(new_size);
	if (c == NULL)
	return (NULL);
	return (c);
	}
	if (new_size == 0 && ptr != '\0')
	{
	free(ptr);
	return (NULL);
	}
	if (new_size == old_size)
	return (ptr);
	c = malloc(new_size);
	if (c == NULL)
	return (NULL);
	if (new_size > old_size)
	{
	for (a = 0; a < old_size; a++)
	c[a] = *((char *)ptr + a);
	}
	if (new_size > old_size)
	{
	for (b = 0; b < new_size; b++)
	c[b] = *((char*)ptr + b);
	}
	free(ptr);
	return (c);
}
