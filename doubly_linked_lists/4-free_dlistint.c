#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: is a pointer of the head of the list
 * Return: Always Exit succes
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp_node;

	while (head != NULL)
	{
		temp_node = head;
		head = head->next;
		free(temp_node);
	}
}
