#include "main.h"

/**
 * puts_half - function that prints half of a string
 *
 * n = (length_of_the_string - 1) / 2
 * @str: print the second half of the string
 * Return (void)
 */
void puts_half(char *str)
{
	int a, n, longi;

	longi = 0;

	for (a = 0; str[a] != '\0'; a++)
		longi++;
	n = (longi / 2);

	if ((longi % 2) == 1)
		n = ((longi + 1) / 2);
	for (a = n; str[a] != '\0'; a++)
		putchar(str[a]);
	putchar('\n');
}
