#include "lists.h"

/**
 * insert_dnodeint_at_index - the function that inserts a new node & given position
 * @h: Is a pointer of a pointer to the first node
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 * Return: pointer to the new node, or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int i;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*h == NULL)
	{
		*h = new_node;
		new_node->prev = NULL;
		new_node->next = NULL;
		return (new_node);
	}

	if (idx == 0)
	{
		new_node->next = *h;
		(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	temp = *h;
	for (i = 0; i< idx - 1 && temp != NULL; i++)
		temp = temp->next;
	if (temp == NULL)
		return (NULL);

	new_node->prev = temp;
	new_node->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = new_node;
	temp->next = new_node;

	return (new_node);
}
