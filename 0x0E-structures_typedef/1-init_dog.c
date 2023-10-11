#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializing a variable of dog struct
 *
 * @d: pointer to the struct of the new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
