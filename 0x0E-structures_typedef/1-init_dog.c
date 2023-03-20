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
	if (d == NULL)
	{
		/* Return immediately if the pointer is null */
		return;
	}
	/* Allocate memory for name and owner strings */
	d->name = malloc(strlen(name) + 1);
	d->owner = malloc(strlen(owner) + 1);

	/* Copy name and owner strings into allocated memory */
	strcpy(d->name, owner);
	strcpy(d->owner, owner);

	/* set the dog's age */
	d->age = age;
}
