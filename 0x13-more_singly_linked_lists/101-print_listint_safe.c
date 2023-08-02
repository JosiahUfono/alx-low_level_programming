#include "lists.h"

/**
 * print_listint_safe - prints a linked list.
 * @head: head of a list.
 * Return: number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t counter = 0, new_n;
	const listint_t *temp_node, *len;

	temp_node = len = NULL;

	temp_node = head;
	while (temp_node != NULL)
	{
		printf("[%p] %d\n", (void *)temp_node, temp_node->n);
		counter++;
		temp_node = temp_node->next;
		len = head;
		new_n = 0;
		if (!head)
			exit(98);
		while (new_n < counter)
		{
			if (temp_node == len)
			{
				printf("-> [%p] %d\n", (void *)temp_node, temp_node->n);
				return (counter);
			}
			len = len->next;
			new_n++;
		}
	}
	return (counter);
}
