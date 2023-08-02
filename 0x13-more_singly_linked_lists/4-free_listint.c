#include "lists.h"

/**
 * free_listint - frees (deletes nodes) of the list
 * @head: head of the list.
 * Return: nil.
 */

void free_listint2(listint_t **head)
{
	listint_t *current_node;

	if(head != NULL)
	{
		current_node = *head;
		while ((current_node->head) != NULL)
		{
			head = head->next;
			free(current_node);
		}
	*head = NULL;
	}
}
