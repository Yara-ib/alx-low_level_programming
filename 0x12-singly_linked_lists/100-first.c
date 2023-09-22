#include "lists.h"

/**
 * before_main - function to be exectued b4 main one.
 * Return: Nothing
*/

void __attribute__((constructor)) before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");
}
