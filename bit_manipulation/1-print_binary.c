#include <stdio.h>

/**
 * print_binary - the function that prints the representation of num
 * @n: is an integer
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	putchar((n & 1) ? '1' : '0');
}
