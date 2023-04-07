#include <stdio.h>

/**
 * set_bit - the function that sets the value of a bit to 1
 * @n: number to evaluate
 * @index: index starting form 0
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n |= (1UL << index);

	return (1);
}
