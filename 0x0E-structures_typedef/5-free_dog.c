#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - frees the dog
 * @d: pointer to dog_t
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
