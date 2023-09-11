#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that prints a struct dog
 * @d: pointer to dog's member struct.
 * Return: Nothing.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == 0)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	if (d->age != 0)
		printf("Age: %f\n", d->age);

	if (d->owner == 0)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
