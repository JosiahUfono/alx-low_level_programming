#include "lists.h"

/**
 * list_len - Function that returns the length of list-t list
 * @h: pointer to the list-t list to print
 * Return: the number of nodes printed
 */

size_t list_len(const list_t *h)
{
	unsigned int j;

	for (j = 0; h != NULL; j++)
	{
		h = h->next;
	}
	return (j);
}
