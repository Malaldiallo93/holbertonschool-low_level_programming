#include "lists.h"

/**
 * list_len - returns the number of elements
 * @h: linked list of type listint_t to traverse
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}

