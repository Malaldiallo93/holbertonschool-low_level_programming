#include "main.h"

/**
 * Write a function that swaps the values of two integers
 * print to swap_int
 *
 * @a: input
 * @b: input
 */
void swap_int(int *a, int *b)
{
	int e;

	e = *a;
	*a = *b;
	*b = e;
}
