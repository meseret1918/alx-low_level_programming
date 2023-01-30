#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - Counts the number of unique nodes
 *                      in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: 0, if the list is not looped
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *my, *name;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	my = head->next;
	name = (head->next)->next;

	while (name)
	{
		if (my == name)
		{
			my = head;
			while (my != name)
			{
				nodes++;
				my = my->next;
				name = name->next;
			}

			my = my->next;
			while (my != name)
			{
				nodes++;
				my = my->next;
			}

			return (nodes);
		}

		my = my->next;
		name = (name->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - a function that frees a listint_t list
 * @h: A pointer to the address of the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 *
 * Description: The function sets the head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *me;
	size_t nodes, index;

	nodes = looped_listint_count(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			me = (*h)->next;
			free(*h);
			*h = me;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			me = (*h)->next;
			free(*h);
			*h = me;
		}

		*h = NULL;
	}

	h = NULL;

	return (nodes);
}
