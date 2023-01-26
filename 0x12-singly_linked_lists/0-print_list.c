#include "lists.h"

/**
 * print_list - function prints all elements of list_t list
 *
 *@h: const list_t pointet to head of list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		nodes++;
		h = h->next;
	}

	return (nodes);
}
