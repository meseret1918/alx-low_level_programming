#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a listint_t list
 * @head: A pointer to the address of the head of the listint_t list
 *
 * Return: 0 If the linked list is empty
 * Otherwise - The head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int my;

	if (*head == NULL)
		return (0);

	tmp = *head;
	my = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (my);
}
