#include "lists.h"

/**
 * find_listint_loop - a function that finds a loop in a linked list
 * @head: head pointer of the list
 * Returns: The address of the node where the loop starts,
 * or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *current_node = head, *next_node = head;

	if (head == NULL)
		return (NULL);

	while (current_node && next_node && next_node->next)
	{
		current_node = current_node->next;
		next_node = next_node->next->next;
		if (current_node == next_node)
		{
			current_node = head;
			while (current_node != next_node)
			{
				current_node = current_node->next;
				next_node = next_node->next;
			}
			return (next_node);
		}
	}
	return (NULL);
}
