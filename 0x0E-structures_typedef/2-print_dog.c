#include <stdlib.h>
#include "dog.h"
/**
 * print_dog -  prints a struct dog
 * @d: pointer struct of dog
 *
 * Return: Always 0
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";

	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %d\nOwner: %s\n", d->name, d->age, d->owner);
}
