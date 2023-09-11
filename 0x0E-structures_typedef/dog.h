#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Define a new type struct dog.
 * @name: struct member for name.
 * @age: struct member for age.
 * @owner: struct member for owner's name.
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
