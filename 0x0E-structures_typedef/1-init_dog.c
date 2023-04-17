#include "dog.h"
#include <stdlib.h>

/**
  * init_dog- A function that initialize the variable of type struct dog
  * @age: age in dog years
  * @owner: dog owner string
  * @d: pointer to struct
  * @name: dog name
  * Return: (void) otherwise exit
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		exit(98);
	(*d).name = name;
	d->age = age;
	d->owner = owner;
}

