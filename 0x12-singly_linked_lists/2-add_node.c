#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning
 *            of the list_t list.
 * @head: Pointer to the head of the list_t list.
 * @str: String to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Else - return the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *D;
	int l;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	D = strdup(str);
	if (D == NULL)
	{
		free(new);
		return (NULL);
	}

	for (l = 0; str[l];)
		l++;

	new->str = D;
	new->l = l;
	new->next = *head;

	*head = new;

	return (new);
}