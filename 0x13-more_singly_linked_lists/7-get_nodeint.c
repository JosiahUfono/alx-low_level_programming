#include "lists.h"

/**
 * get_nodeint_at_index - returns the of index of a linked list.
 * @head: head of the list.
 * @index: index of the node.
 * Return: returns the node's index. Returns NULL if empty.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index && head != NULL)
	{
		i++;
		head = head->next;
	}
	return (head);
}
