#include "dog.h"
/**
 *free_dog - free dogo
 *@d: struct
 */
void free_dog(dog_t *d)
{
	if (d)
	{
	free(d->name);
	free(d->owner);
	free;
	}
}
