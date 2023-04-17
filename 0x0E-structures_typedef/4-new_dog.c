#include "dog.h"
#include <stdlib.h>
#include <string.h>


/**
 * new_dog- A function that creates a new dog object
 * @name: dog name string
 * @age: dog age integer in dog years
 * @owner: string rep dog owner
 * Return: dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *newName, *newOwner;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}

	newName = malloc(sizeof(name));
	if (newName == NULL)
	{
		free(dog);
		return (NULL);
	}

	strcpy(newName, name);
	dog->name = newName;

	newOwner = malloc(sizeof(owner));
	if (newOwner == NULL)
		return (NULL);
	strcpy(newOwner, name);
	dog->owner = newOwner;

	dog->age = age;

	return (dog);
}






