#include <stdio.h>

/**
 * flip_bits - the function that return the numbers of bits
 * @n: first number
 * @m: second number to convert
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int x = n ^ m;

	while (x != 0)
	{
		count++;
		x &= (x - 1);
	}

	return (count);
}
