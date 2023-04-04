#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: linked list of type list_t to print
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
		printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d] %s\n", current->len, current->str);
		}
		count++;
		current = current->next;
	}

	return (count);
}
