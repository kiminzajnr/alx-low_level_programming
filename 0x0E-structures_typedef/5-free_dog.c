#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that frees a dog.
 *
 * @d: pointer.
 * Return: nothing.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
