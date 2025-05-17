#include "main.h"

/**
 * _strpbrk - Finds first matching character from accept in s.
 * @s: The string to search in.
 * @accept: The string containing accepted characters.
 * Return: Pointer to first match in s, or NULL if none found.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int s_index, a_index;

	for (s_index = 0; s[s_index] != '\0'; s_index++)
	{
		for (a_index = 0; accept[a_index] != '\0'; a_index++)
		{
			if (s[s_index] == accept[a_index])
				return (s + s_index);
		}
	}
	return (NULL);
}
