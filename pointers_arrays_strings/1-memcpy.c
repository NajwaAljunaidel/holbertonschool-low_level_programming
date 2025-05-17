#include "main.h"

/**
 * _memcpy - copies memory area
 * @src: array that i take from it
 * @dest:  array that i want copy in
 * @n: the length of src to be copied to dest
 * Return: pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (int i = 0; i < n; i++)


		dest[i] = src[i];

	return (dest);







}



