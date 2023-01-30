#include "lists.h"

/**
 * print_listint - a function that prints all the elements of listint_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (n);
}
