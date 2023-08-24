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


***

#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncpy - Entry point_strncpy
 *
 * @dest: Parameter for _strncpy()
 * @src: Parameter for _strncpy()
 * @n: Parameter for _strncpy()
 *
 * Return: Always 0 (Success)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int len;
	int x = 0;

for (len = 0; len < n && src[len] != '\0'; ++len)
{

	dest[x] = src[n -len];
}

return (dest);
}

****

int len =0;
	int x = 0;
for (len = 0; src[len] != '\0'; ++len)
	;

for (n = 0; n < len && src[len] != '\0'; ++n)
{
dest[x] = src[n];
}
return (dest);
}
