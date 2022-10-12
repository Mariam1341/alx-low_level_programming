#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - nitialize a variable of type struct dog
 *
 * @d : struct dog
 * @name : string
 * @owner : string
 *
 * Return: void
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
