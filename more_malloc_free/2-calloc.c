#include <stdlib.h>
#include <string.h>

/**
 * _calloc - unction that allocates memory for an array
 * @nmemb: input size
 * @size: bytes pointer
 * Return: NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return NULL;
	}

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return NULL;
	}
	memset(ptr, 0, nmemb * size);

	return ptr;
}
