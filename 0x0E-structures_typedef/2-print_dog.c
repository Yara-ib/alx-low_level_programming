#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - function that prints a struct dog.
 * @d: pointer to struct dog type name.
 * Return: Nothing.
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");

		if (d->owner == NULL)
			printf("Owner: (nil)\n");

		printf("Name: %s\n", d->name);
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
