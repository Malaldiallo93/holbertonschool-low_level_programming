#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: input
 * @s2: input
 *
 * Return (_strcmp)
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (; s1[i] == s2[i] && s1[i] != '\0'; i++)
		continue;
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	if (s1[i] == s2[i])
		return (0);
	return (0);
}
