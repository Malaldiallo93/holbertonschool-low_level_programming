#include "lists.h"

/**
 * delete_dnodeint_at_index - is the function that deletes the nodes
 * @head: Is a pointer of the pointer of the head
 * @index: index where the new node is add
 * Return: 1 if is success, or -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *temp = NULL;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(current);
		return (1);
	}

	for (i = 0; current != NULL && i < index - 1; i++)
	{
		current = current->next;
	}

	temp = current->next;
	current->next = temp->next;
	if (temp->next != NULL)
	{
		temp->next->prev = current;
	}
	free(temp);
	return (1);
}
