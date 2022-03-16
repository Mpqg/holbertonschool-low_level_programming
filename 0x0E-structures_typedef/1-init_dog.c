#include <stdlib.h>
#include "dog.h"
/**
 * init_dog -  initialize a variable of type
 * @d: pointer struct of dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: Always 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return (NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;
}
