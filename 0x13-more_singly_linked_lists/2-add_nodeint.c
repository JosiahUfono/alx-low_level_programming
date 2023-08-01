#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning
 * of the list
 * @head: head of the list.
 * @n: n element.
 * Return: returns address of the new element. NUll if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
