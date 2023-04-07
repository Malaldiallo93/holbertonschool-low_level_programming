#include "lists.h"

/**
 * sum_dlistint - the function that returns the sum of all the data (n)
 * @head: Is a pointer of the head
 * Return: sum or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
