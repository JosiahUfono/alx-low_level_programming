#include "lists.h"

/**
 * dlistint_len - Counts the number of elements in list dlistint_t.
 * @h: Head of the dlistint_t list.
 * Return: Returns the number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
