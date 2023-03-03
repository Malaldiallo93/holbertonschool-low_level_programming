#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: input string
 * @b: input character
 * @n: input integer
 * Return: a string
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
