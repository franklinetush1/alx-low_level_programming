#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the
 *                   end of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *fresh, *end;

	fresh = malloc(sizeof(listint_t));
	if (fresh == NULL)
		return (NULL);

	fresh->n = n;
	fresh->next = NULL;

	if (*head == NULL)
		*head = fresh;

	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = fresh;
	}

	return (*head);
}
