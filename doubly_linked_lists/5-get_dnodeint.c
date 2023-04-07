#include "lists.h"

/**
 * get_dnodeint_at_index - Write a function that returns the nth node
 * @head: Is a pointer of the head
 * @index: index of the node
 * Return: if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	if (i != index)
		return (NULL);

	return (current);
}
