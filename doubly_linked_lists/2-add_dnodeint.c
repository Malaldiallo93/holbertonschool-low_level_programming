#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning
 * @head: a pointer to a pointer to the head
 * @n: integer value
 * Return: NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head)
		(*head)->prev = new_node;

	*head = new_node;
	return (new_node);
}
