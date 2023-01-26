#include "lists.h"

/**
 * list_len - a function returns the number of elements in a linked list_t list
 * @h: pointer to the list
 *
 * Return: number of nodes
 **/
size_t list_len(const list_t *h)
{
	int m;

	for (m = 0; h != NULL; m++)
	{
		h = h->next;
	}
	return (m);
}
