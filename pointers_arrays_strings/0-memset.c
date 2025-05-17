#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory area to be filled
 * @b: byte to fill the memory with
 * @n: number of bytes to be filled
 */
char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i;

	for (i = 0; n > 0; i++,  n--)

		s[i] = b;
	return (s);
}
