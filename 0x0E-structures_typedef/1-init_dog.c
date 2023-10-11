#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d: variable of data type struct dog name
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	dog.name = name;
	dog.age = age;
	dog.owner = owner;
}
