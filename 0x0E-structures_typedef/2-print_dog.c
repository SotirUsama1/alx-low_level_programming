#include "dog.h"

/**
 * print_dog - print a variable of data tupe struct dog
 *
 * @d: pointer to variable address
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		(*d).name = "(nil)";
	if (d->owner == NULL)
		(*d).owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s", d->name, d->age, d->owner);
}
