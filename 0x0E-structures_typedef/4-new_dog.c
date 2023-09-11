#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * new_dog - function that creates a new dog.
 * @name: pointer to dog's name.
 * @age: the age of the dog.
 * @owner: pointer to owner's name.
 * Return: Nothing.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	if (my_dog == NULL)
		return (NULL);
	strcpy(new_dog->name, my_dog.name);
	strcpy(new_dog->owner, my_dog.owner);
	return (new_dog);
}
