#include "lists.h"

/**
  * add_dnodeint_end - function adds a new node at the end of a dlistint_t list
  *
  * @head: double pointer to head of linked list
  * @n: value for new node
  * Return: the address of the new element, or NULL if it failed
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tmp;

	if (head == NULL)
		return (NULL);

	tmp = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
		new_node->prev = NULL;
		return (new_node);
	}
	while (tmp && tmp->next)
	{
		tmp = tmp->next;
	}

	tmp->next = new_node;
	new_node->prev = tmp;

	return (new_node);
}

