#include "main.h"

/**
 * _strspn - Gets length of prefix substring in s with only accept chars.
 * @s: Input string.
 * @accept: Accepted characters.
 * Return: Number of matching characters from start of s.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int s_index, accept_index;
	int not_found;

	for (s_index = 0; s[s_index] != '\0'; s_index++)
	{
		not_found = 1;
		for (accept_index = 0; accept[accept_index] != '\0'; accept_index++)
		{
			if (s[s_index] == accept[accept_index])
			{
				not_found = 0;
				break;
			}
		}
		if (not_found)
			break;
	}

	return (s_index);
}

