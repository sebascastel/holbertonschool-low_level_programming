#include "dog.h"
/**
 *init_dog - initialize a variable of type struct dog
 *@d: dogo point
 *@name: name dogo
 *@age: age dogo
 *@owner: dogo owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
