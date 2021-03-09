#include "dog.h"
#include <stdlib.h>

/**
 * *new_dog - creates a new dog.
 *
 * @name: dog name.
 * @age: dog age.
 * @owner: dog owner.
 * Return: pointer to new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, length_of_name, length_of_owner;
	struct dog *new_dog;

	length_of_name = 0;
	while (name[length_of_name] != '\0')
		length_of_name++;
	length_of_owner = 0;
	while (owner[length_of_owner] != '\0')
		length_of_owner++;
	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = malloc(length_of_name + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		return (NULL);
	}
	new_dog->owner = malloc(length_of_owner + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		free(new_dog->owner);
		return (NULL);
	}
	for (i = 0; i <= length_of_name; i++)
		new_dog->name[i] = name[i];
	for (i = 0; i <= length_of_owner; i++)
		new_dog->owner[i] = owner[i];
	new_dog->age = age;
	return (new_dog);
}
