#include <stdio.h>

/**
 * binary_to_uint - the function that converts a binary numb
 * @b: is a pointer to char
 * Return: converted the decimal numb
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int k = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[k] != '\0')
	{
		if (b[k] == '0' || b[k] == '1')
		{
			result = result * 2 + (b[k] - '0');
			k++;
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
