#include "main.h"

/**
 * _strchr - said where this charecter in a string
 * @c: string we search for
 * @s: the string that we will search in
 * Return: if the c is found -pointer to the first occurrence if c  not - null
 *
 *
 *
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
