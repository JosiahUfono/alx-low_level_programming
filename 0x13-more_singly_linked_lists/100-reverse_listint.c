#include "lists.h"

/**
 * reverse_listint - reverses the list.
 * @head: head of the list.
 * Return: pointer to the first node.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr;
	listint_t *n;

	ptr = NULL;
	n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = ptr;
		ptr = *head;
		*head = n;
	}
	*head = ptr;
	return (*head);
}
