#include <stdio.h>
#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * init_dog - initialize a dog struct
 * @d: pointer to struct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: Owmer to initialize
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* Return NULL if the allocation failed */
	if (d == NULL)
		return;

	d->name = strdup(name);
	d->owner = strdup(owner);
	d->age = age;

	if (d->name == NULL || d->owner == NULL)
	{
		/* handle memory allocation error */
		free(d->name);
		free(d->owner);
		d->name = NULL;
		d->owner = NULL;
	}
}
