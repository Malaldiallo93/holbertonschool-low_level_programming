#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: input string
 * Return: int a
 */
int _strlen_recursion(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		a++;
		s++;
	}
	return a;
}