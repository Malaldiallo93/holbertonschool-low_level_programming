#include "main.h"

/**
 * find_prime - function that find if n is prime numb
 * @n: number to verify
 * @i: number to test
 * Return: 1 if the input integer is prime numb
 */
int find_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (find_prime(n, i - 1));
}
/**
 * is_prime_number - function that returns 1
 * @n: input numb
 * Return: 1 if @n is prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (find_prime(n, n - 1));
}
