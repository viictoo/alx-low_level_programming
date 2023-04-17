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
		return (NULL);

	newName = malloc(strlen(name) + 1);
	if (newName == NULL)
	{
		free(dog);
		return (NULL);
	}
	strcpy(newName, name);
	dog->name = newName;

	newOwner = malloc(strlen(owner) + 1);
	if (newOwner == NULL)
	{
		free(dog);
		free(newName);
		return (NULL);
	}
	strcpy(newOwner, owner);
	dog->owner = newOwner;

	dog->age = age;

	return (dog);
}






