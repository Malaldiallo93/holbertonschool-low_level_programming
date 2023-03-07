#include "main.h"

/**
 * int factorial -  function that returns the factorial
 * @n: input
 * 
 * Return: void
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
