#include "main.h"

/**
 * _strncpy -  a function that copies a string.
 * @dest: copie to
 * @src: copie form
 * @n: input
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
