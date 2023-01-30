#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop in a linked list
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The address of the node where the loop starts
 * Otherwis - NULL, if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *my, *name;

	if (!head)
		return (NULL);
	my = name = head;
	while (name->next && (name->next)->next)
	{
		my = my->next;
		name = (name->next)->next;
		if (my == name)
		{
			my = head;
			while (my != name)
			{
				my = my->next;
				name = name->next;
			}
			return (name);
		}
	}
	return (NULL);
}
