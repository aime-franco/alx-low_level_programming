#include "main.h"
#include <stdlib.h>

/**
 * init_dog - initials the dog structure
 * @d: initals
 * @name: pet name
 * @age: pet age
 * @owner: pet owner
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
