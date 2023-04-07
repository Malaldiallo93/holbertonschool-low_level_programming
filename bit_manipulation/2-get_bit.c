#include <stdio.h>

/**
 * get_bit - the function that returns the value given idx
 * @n: number to evaluate
 * @index: starting form 0
 * Return: value of bit at index, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
