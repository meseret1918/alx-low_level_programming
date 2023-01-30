#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at inde of a listint_t
 * @head: A pointer to the address of the head of the listint_t list
 * @index: The index of the node to be deleted - indices start at 0
 *
 * Return: 1, if it succeeded.
 * -1, if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *my, *copy = *head;
	unsigned int my_node;

	if (copy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	for (my_node = 0; my_node < (index - 1); my_node++)
	{
		if (copy->next == NULL)
			return (-1);

		copy = copy->next;
	}

	my = copy->next;
	copy->next = my->next;
	free(my);
	return (1);
}
