#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list
 * @h: The list_t list
 *
 * Return: The number of nodes in h
 */
size_t print_list(const list_t *h)
{
	int m;

	for (m = 0; h != NULL; m++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (m);
}

