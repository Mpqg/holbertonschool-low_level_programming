#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * new_dog -  creates a new dog
 * @d: pointer struct of dog
 *
 * Return: Always 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int lenName = 0;
	int lenOwner = 0;

	while (name[lenName])
		lenName++;

	while (owner[lenOwner])
		lenOwner++;

	dog_t *dog;
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (lenName + 1));
	if (dog->name == NULL)
		return (NULL);

	dog->owner = malloc(sizeof(char) * (lenOwner + 1));
	if (dog->owner == NULL)
		return (NULL);
	
	dog->age = age;
	
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);

	return (dog);
}
/**
 * *_strcpy - copies the string to dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}