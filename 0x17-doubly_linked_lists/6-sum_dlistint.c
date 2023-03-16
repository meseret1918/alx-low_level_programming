#include "lists.h"

/**
  * sum_dlistint - returns sum of all the data (n) of a dlistint_t linked list.
  *
  * @head: first element of linked list
  * Return: 0 if empty, sum otherwise
  */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
