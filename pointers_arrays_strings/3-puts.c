#include "main.h"

/**
 * _puts - a function that prints a string
 * @str: input the string
 * Return: the length of the strig
 */
void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		putchar(str[a]);
		a++;
	}
	putchar('\n');
}

