#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * init_dog - nitialize a variable of type struct dog
 *
 * @d : struct dog
 * @name : string
 * @owner : string
 *
 * Return: void.
 */
void print_dog(struct dog *d)
{
	if (d.name == NULL)
		printf("Name : nil")
	else
		printf("Name : %s", d.name);

	if (d.age == NULL)
		printf("Age : nil")
	else
		printf("Age : %s", d.age);

	if (d.owner == NULL)
		printf("Owner : nil")
	else
		printf("Owner : %s", d.owner);
}
