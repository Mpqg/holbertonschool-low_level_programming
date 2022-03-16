#include <stdio.h>
#include "dog.h"
/**
 * free_dog - function that frees dogs
 * @d: pointer a struct dog
 *
 * Return: Always 0
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
