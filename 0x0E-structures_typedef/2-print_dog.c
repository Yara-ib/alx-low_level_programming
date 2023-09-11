#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - function that prints a struct dog
 * @d: pointer to dog's member struct.
 * Return: Nothing.
 */

void print_dog(struct dog *d)
{
	if (d != 0)
	{
		if (d->name == 0)
			printf("Name: (nil)\n");
		if (d->age == 0)
			printf("Age: (nil)\n");
		if (d->owner == 0)
			printf("Owner: (nil)\n");

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
	}
}
