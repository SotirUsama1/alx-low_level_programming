#include "dog.h"
#include <string.h>

/**
 * new_dog - creates new variable of type dog_t
 *
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: dog variable
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	strcpy(dog->name, name);
	strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
