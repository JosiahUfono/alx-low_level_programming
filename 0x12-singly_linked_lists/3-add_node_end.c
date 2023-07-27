#include "lists.h"

/**
 * add_node_end -  function that adds a new node at the end of a list_t list.
 * @head: pointer to the first node
 * @str: string to be added to the new node
 * Return: returns the address of the new element, or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup_str;
	list_t *new_node, *previous_node;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	dup_str = strdup(str);
	if (!str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = dup_str;
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (!*head)
		*head = new_node;

	else
	{
		previous_node = *head;
		while (previous_node->next)
			previous_node = previous_node->next;
		previous_node->next = new_node;
	}
	return (*head);
}
