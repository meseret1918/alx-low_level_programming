#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list
 * @head: A pointer to the address of the head of the listint_t list
 *
 * Return: Sets the head to NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *my;

	if (head == NULL)
		return;

	while (*head)
	{
		my = (*head)->next;
		free(*head);
		*head = my;
	}

	head = NULL;
}
