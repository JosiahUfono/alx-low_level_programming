#include "lists.h"

/**
 * print_list - function that prints all elements in the list
 * size_t - returns the number of nodes
 * @h: the struct node
 * Return: returns number of nodes in the list: @j
*/

size_t print_list(const list_t *h)
{
unsigned int j;

	for (j = 0; h != NULL; j++)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		h = h->next;
	}
	return (j);
}
