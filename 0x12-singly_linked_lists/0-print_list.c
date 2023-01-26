#include "lists.h"

/**
 *_strlen - counts and reutns string length
 * @s: the input string
 *
 * Return: the length
 */
int _strlen(char *s)
{
	int c = 0;

	if (!s)
		return (0);
	while (*s++)
		c++;
	return (c);
}

/**
 * print_list - print all the elements of list_t
 * @h: the head of the list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	if (!h)
		return (0);
	while (h)
	{
		if (!h->str)
			printf("[%u] (nil)\n", _strlen(h->str));
		else
			printf("[%u] %s\n", _strlen(h->str), h->str);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
