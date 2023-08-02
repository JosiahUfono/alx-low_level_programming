#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: head of the linked list
 * Return: returns number of elements in the freed list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *temp;

	if (!*h)
		return (0);

	do {
		if (((*h) - (*h)->next) > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
		else
		{
			free(*h);
			*h = NULL;
		}
		len++;
	} while (*h);
	return (len);
}
