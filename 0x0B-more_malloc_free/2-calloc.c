#include <stdlib.h>
/**
 * *_calloc - allocates memory for an array
 *@nmemb: size array
 *@size: number array
 *Return: (0) always
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a;
	char *b;

	if (nmemb == 0 || size == 0)
	return (NULL);
	b = malloc(nmemb * size);
	if (b == NULL)
	return (NULL);
	for (a = 0; a < nmemb * size; a++)
	b[a] = 0;
	return (b);
}
