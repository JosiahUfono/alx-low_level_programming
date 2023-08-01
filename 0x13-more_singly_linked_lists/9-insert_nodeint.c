#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a certain position.
 * @head: head of the list.
 * @idx: index of the list where the new node should be added.
 * @n: int variable.
 * Return: the address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node;
	listint_t *h;

	h = *head;

	if (idx != 0)
	{
		while (i < idx - 1 && h != NULL)
			i++;
			h = h->next;
	}

	if (h == NULL && idx != 0)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = h->next;
		h->next = new_node;
	}
	return (new_node);
}
