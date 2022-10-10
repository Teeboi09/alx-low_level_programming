#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - code
 * @d: code
 * @name: code
 * @age: code
 * @owner: code
 * Return: code
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
