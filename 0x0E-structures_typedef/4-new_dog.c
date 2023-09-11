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
/**Write a function that creates a new dog.
Prototype: dog_t *new_dog(char *name, float age, char *owner);
You have to store a copy of name and owner
Return NULL if the function fails*/

dog_t *new_dog(char *name, float age, char *owner)
{
	char *n_name, *n_owner;

	n_name = malloc(sizeof(dog_t));

	if (n_name == NULL)
		return (NULL);

	for(i = 0; i < (strlen(name)-1); i++)
		n_name[i] = name[i];
	for(k = 0; k < (strlen(name)-1); k++)
		n_owner[k] = owner[k];

	return (n_name);
	free (n_name);
}
