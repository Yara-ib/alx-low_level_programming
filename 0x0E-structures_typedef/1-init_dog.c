#include "dog.h"

/**
 * init_dog - a function that initialize a variable of type struct dog.
 * @d: pointer to struct dog type.
 * @name: pointer to name.
 * @age: the age of the dog.
 * @owner: pointer to owner's name.
 * Return: Nothing.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
