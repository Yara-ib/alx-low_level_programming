#include "main.h"
#include <stdio.h>

/**
 * _strcat - Entry point
 *
 * @dest: Parameter for _strcat()
 *
 * @src: Parameter for _strcat()
 *
 * Return: Always 0 (Success)
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int x = 0;
	/*int j = 0;*/

	for (i = 0; dest[i] != '\0'; ++i)
	{
		dest[i] = dest[i];

		for (x = 0; src[x] != '\0'; ++x)
		dest[i] = src[x];
		*dest = *(dest + src);
		/*j = i + x;*/
		/*dest[i] = dest[i] + src[j];*/
		/*dest[i] = dest[j];*/
	}
	dest[i] = '\0';
	return (dest);
}


#include "main.h"
#include <stdio.h>

/**
 * _strcat - Entry point
 *
 * @dest: Parameter for _strcat()
 *
 * @src: Parameter for _strcat()
 *
 * Return: Always 0 (Success)
 */

char *_strcat(char *dest, char *src)
{
	for (*dest = 0; *dest != '\0'; *dest++)
	{
		tmp = dest;
		for (src = 0; *src != '\0'; *src++)
		{
			tmp = dest + src;
		}
	}

	*dest = *(dest -1);
	*dest = *dest + *src;

	return (dest);
}


***

#include "main.h"
#include <stdio.h>

/**
 * _strcat - Entry point
 *
 * @dest: Parameter for _strcat()
 *
 * @src: Parameter for _strcat()
 *
 * Return: Always 0 (Success)
 */

char *_strcat(char *dest, char *src)
{
	int i, x;

	for (i = 0; dest[i] != '\0'; ++i);
	for (x = 0; src[x] != '\0'; ++x, ++i)
		{
			dest[i] = src[x];
		}
		dest[i] = '\0';
		return (dest);
}
