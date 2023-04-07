#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements
 * @h: a pointer to the head of the list
 * Return: the number of elements in a linked
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
