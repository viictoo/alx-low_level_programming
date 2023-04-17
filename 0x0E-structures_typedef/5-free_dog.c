#include "dog.h"
#include <stdlib.h>

/**
  * free_dog- A function that frees elements in struct dog
  * @d: pointer to the dog struct
  */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
