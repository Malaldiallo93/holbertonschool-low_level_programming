#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: copie from
 * @src: copie to
 * @n: input
 * Return: dest
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
