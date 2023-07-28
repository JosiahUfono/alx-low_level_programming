#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: pointer to the first node
* Return: returns the address of the new element, or NULL if it failed
*/

void free_list(list_t *head)
{
	list_t *current_node;

	while ((current_node = head) != NULL)
	{
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}
