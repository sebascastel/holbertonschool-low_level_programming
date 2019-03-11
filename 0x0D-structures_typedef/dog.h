#ifndef DOGO
#define DOGO
/**
 *struct dog - dog
 *@name: name dogo
 *@age: age dogo
 *@owner: dogo owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dogo dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
