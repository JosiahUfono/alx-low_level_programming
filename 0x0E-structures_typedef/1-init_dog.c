#include "dog.h"

/**
 * init_dog - Function that initializes a variable of type struct dog
 * @d: Struct dog object
 * @name: dog name object
 * @age: dog age object
 * @owner: dog owner object
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
	d = malloc(sizeof(struct dog));

d->name = name;
d->age = age;
d->owner = owner;
}
