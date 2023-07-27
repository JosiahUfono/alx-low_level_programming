#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: pointer to the first node
 * @str: string to be added to the new node
 * Return: returns the address of the new element, or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

/*create a new node and allocate mempry for it*/
new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);

	/*Make the newnode points to the head node*/
	new_node->next = *head;

	/*point the head to the new node*/
	*head = new_node;

	return (*head);
}
