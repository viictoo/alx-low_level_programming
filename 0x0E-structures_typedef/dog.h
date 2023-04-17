#ifndef DOG_H
#define DOG_H


int _putchar(char c);

/**
  * struct dog-Contains dog elements - dog name, age, owner
  * @name: dog name type = char *
  * @age: dog age in dog years type = float
  * @owner: dog owner type = char *
  *
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif /* define DOG_H */
