#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_dog - frees the memory allocated for a dog struct
 * @d: pointer to the dog struct to free
 */
void free_dog(dog_t *d)
{
	if (d != NULL) /* checke if pointer is not small */
	{
		if (d->name != NUL) /* free name if not NULL */
			free(d->name);
		if (d->owner != NULL) /* free owner if NULL */
			free(d->owner);
		free(d); /* free the dog struct itself */
	}
}
