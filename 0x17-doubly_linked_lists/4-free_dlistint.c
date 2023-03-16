#include "lists.h"

/**
  * free_dlistint - Write a function that frees a dlistint_t list.
  *
  * @head: first member of list
  * Return: void
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
