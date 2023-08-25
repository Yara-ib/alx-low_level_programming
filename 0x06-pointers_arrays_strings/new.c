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


***---

#include "main.h"

/**
 * _strcmp - Entry point_strcmp
 *
 * @s1: Parameter for _strcmp()
 * @s2: Parameter for _strcmp()
 *
 * Return: Always 0 (Success)
 */

int _strcmp(char *s1, char *s2)
{
	int x = i = 0;

if s1 == s2
return (0);

if s1 > s2
return (15);

if s1 < s2
return (-15);
}

if (s1 [x] == s2 [i])
{
	if (s1 [x] > s2 [i])
		{
			return (15);
		}
		else if (s1 [x] < s2 [i])
		{
			return (-15);
		}
		else
		{
			for (x =0; s1 [x] != 0; ++x)
			{
				if (s1 [x] > s2 [i])
		{
			return (15);
		}
		else if (s1 [x] < s2 [i])
		{
			return (-15);
		}
		else
		{
			return (0);
		}


		****--*-8787

		#include "main.h"

/**
 * _strcmp - Entry point_strcmp
 *
 * @s1: Parameter for _strcmp()
 * @s2: Parameter for _strcmp()
 *
 * Return: Always 0 (Success)
 */

int _strcmp(char *s1, char *s2)
{
	int x = i = 0;

	for (x =0; s1[x] != 0; ++x)
	{
		if (s1[x] > s2[i])
		{
			return (15);
		}
		else if (s1[x] < s2[i])
		{
			return (-15);
		}
		else
		{
			return (0);
		}
	}
}
----

int _strcmp(char *s1, char *s2)
{
	int x;
	int i = 0;

	for (x = 0; s1[x] != 0; ++x)
	{
		if ((s1[x] - s2[i]) > 0)
		{
			return ((s1[x] - s2[i]));
		}
		else if ((s1[x] - s2[i]) < 0)
		{
			return ((s1[x] - s2[i]));
		}
		else
		{
			return ((s1[x] - s2[i]));
		}
	}
	return (0);
}
*******

void reverse_array(int *a, int n)
{
	int x = 0;
	int *b;

	for (x = 0; (n-1) >=0; ++x,--n)
	{

		b[x] = a[n-1];
	}

}

***


#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * cap_string - Entry point
 *
 * @n: Parameter for cap_string()
 *
 * Return: Always 0 (Success)
 */

char *cap_string(char *str)
{
	int length = strlen(str);
	int i;

	str[0] = toupper(str[0]);
	for (i = 0; i < (length -1) && str[i] != '\0'; ++i)
	{

	if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == ',' || str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' || str[i] == '"' ||
			str[i] == '(' || str[i] == ')' || str[i] == '{' ||
			str[i] == '}')
			{

				str[i + 1] = toupper(str[i + 1]);
			}
	}
	return (str);
}
***

#include "main.h"

/**
 * leet - Entry point
 *
 * @char: Parameter for leet()
 *
 * Return: Always 0 (Success)
 */

char *leet(char *n)
{
	int i;
	m[5]= "4, 3, 0, 7, 1";
	if
		{
			while (n[]= "a, e, o, t, l" || n[]= "A, E, O, T, L");
			{
				n[i] = "4, 3, 0, 7, 1";
			}
	for (i=0; n[i] != '\0'; ++i)
	{
		n[i] = m[i];
	}
	for (i=0; k[i] != '\0'; ++i)
	{
		n[i] = m[i];
	}
		}
	return (n);
}
