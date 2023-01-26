#include "lists.h"

int _strlen_recursion(char *s);

/**
 * add_node - a function that adds a new node at the beginning of a list_t list
 * @head: pointer to the first element of the list
 * @str: string to set in the new node
 *
 * Return: address of the new element, or NULL if it failed
 **/
list_t *add_node(list_t **head, const char *str)
{
	char *nstr = strdup(str);
	list_t *newhead = NULL;
	int m;

	if (!nstr)
		return (NULL);
	for (m = 0; nstr[m] != '\0'; m++)
	{
		;
	}
	newhead = malloc(sizeof(list_t));
	if (newhead == NULL)
	{
		free(nstr);
		return (NULL);
	}
	newhead->str = nstr;
	newhead->len = m;
	newhead->next = *head;
	*head = newhead;
	return (newhead);
}
