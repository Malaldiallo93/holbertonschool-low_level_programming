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

	while (dest[len] != '\0')
	{
		len++;
	}
	for (; n != 0 && src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len++;
		n--;
	}
	dest[len] = '\0';

	return (dest);
}


