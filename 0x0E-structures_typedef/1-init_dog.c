#include "dog.h"
/**
 * init_dog - initiate dog
 * @d: dog struct
 * @name: name of dog
 * @age: age
 * @owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
