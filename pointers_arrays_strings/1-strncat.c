#include "main.h"

/**
 * _strncat -  a function that concatenates two strings.
 * @dest: copie to
 * @src: copie form
 * @n: input
 *
 * Return: dest
 */
 char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int len = 0;

	while (dest[len] != '\0' )
	{
		len++;
	}
	for (; i < n && src[i] != '\0'; i++)
	{
		dest[len + 1] = src[i];
	}
	dest[len + 1] = '\0';

	return (dest);
}


