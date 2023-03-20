#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize a dog struct
 * @d: pointer to the dog struct
 * @name: name of the dog
 * @age: age of dog
 * @owner: Owmer of the dog
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	/* Allocate memory for name and owner strings */
	d->name = malloc(strlen(name) + 1);
	d->owner = malloc(strlen(owner) + 1);

	/* Copy name and owner strings into allocated memory */
	strcpy(d->name, owner);
	strcpy(d->owner, owner);

	/* set the dog's age */
	d->age = age;
}
